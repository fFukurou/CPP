#include <iostream>
#include <string>

#include <stdlib.h>



int main()
{
	using namespace std::string_literals;

	const char* name = "fFukurou";

	const wchar_t* name2 = L"fFukurou";

	const char16_t* name3 = u"fFukurou";
	const char32_t* name4 = U"fFukurou";

	std::string name0 = "fFukur"s + "ou";

	const char* paragraph = R"(One thing
  I don't know why
    It doesn't even matter
      How hard you try
        Just keep that in mind)";



	std::cout << name0 << std::endl;
	std::cout << paragraph << std::endl;
}