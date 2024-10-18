# c\_restrict

Provides a `restrict` macro for C/C++.

The macro will use the compiler's built-in extension when the `restrict`
keyword is not available (primarily because it's in C++).

Supports GNU and MSVC compatible compilers (GCC, Clang, MSVC, etc.).
