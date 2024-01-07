#include <iostream>
#include "swap.h"
//using namespace std;

int main(int argc, char ** argv)
{
	swap myswap(10,20);
	myswap.printInfo();
	myswap.run();
	myswap.printInfo();
	// std::cout << "hello cmake" << std::endl;
	return 0;
}
