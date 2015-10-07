#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double d = 122.345;
	double d1 = 222.345;
    std::cout << std::fixed;
    std::cout << std::setprecision(4);
    std::cout << d<<endl;
    std::cout << d1;
}
