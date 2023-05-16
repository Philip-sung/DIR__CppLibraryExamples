#pragma once
#ifndef __LIBTEST__
#define __LIBTEST__

#include <iostream>

void Div(const char* s);
void Test(const char* s);
void Report(const char* s);

void Div(const char* s) {
	std::cout << std::endl << "____" << s << "____\n";
}

void Test(const char* s) {
	std::cout << "#TEST : " << s << "\n\n";
}

void Report(const char* s) {
	std::cout << std::endl << "#Result Report : " << s << "\n\n";
}

#endif // !__LIBTEST__
