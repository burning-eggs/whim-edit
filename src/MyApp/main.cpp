#include "MyLibrary/SomeClass.h"

#include <iostream>

int main(int, char* []) {
    SomeClass a(50);

    std::cout << "Hello, world!\n";
    std::cout << "Value: " << a.Value() << "\n";

    return 0;
}

#if defined( _WIN32 )

#include <Windows.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    return main(__argc, __argv);
}

#endif // _WIN32