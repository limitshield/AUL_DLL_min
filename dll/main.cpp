//main.dll : ファイル名
//func : Luaから呼び出す関数名
#include <lua.hpp>

int func(lua_State* L) {
    return 0;
}

static luaL_Reg functions[] = {
    { "func", func },
    { nullptr, nullptr }
};

extern "C" {
    __declspec(dllexport) int luaopen_main(lua_State* L) {
        luaL_register(L, "main", functions);
        return 1;
    }
}