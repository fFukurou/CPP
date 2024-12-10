#include <iostream>
#include <string>	

// Defining what the code should pre-process the 'WAIT' word as;
#define WAIT std::cin.get()


#if PR_DEBUG == 1
#define LOG(x) std::cout << x << std::endl
#elif defined(PR_RELEASE)
#define LOG(x)
#endif


#define MAIN int main() \
{\
	LOG("Hello");\
	WAIT;\
}

MAIN