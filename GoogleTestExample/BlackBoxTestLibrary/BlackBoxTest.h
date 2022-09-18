#pragma once

#ifdef  BLACKBOXTESTLIBRARY_EXPORT
#define BLACKBOXTEST_API __declspec(dllexport)
#else
#define BLACKBOXTEST_API __declspec(dllimport)
#endif //  BLACKBOXTEST_EXPORT

// Use extern "C" so C++ compiler does nott mess with
// the header we defined
extern "C" {
	BLACKBOXTEST_API int Fibonacci(int v);
}