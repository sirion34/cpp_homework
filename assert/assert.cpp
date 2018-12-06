#include <iostream>
#include <math.h>
#include <cassert>

#define ASSERT_EQUALL assert(abs(a-b) <= 0.00001) ; std::cout << a << std::endl << b << std::endl;
#define ASSERT_NEQUALL assert(abs(a-b) >= 0.00001) ; std::cout << a << std::endl << b << std::endl;
#define ASSERT_TRUE assert(a) ; std::cout << a << std::endl;
#define ASSERT_FALSE assert(!a) ; std::cout << a << std::endl;

bool assert_equal(float a,float b)
{
    float about_zero = 0.00001;
    a = b-a;
    if (abs(a) <= about_zero)
        return true;
    else
        return false;
}

bool assert_nequal(float a,float b)
{
    float about_zero = 0.00001;
    a = b-a;
    if (abs(a) > about_zero)
        return true;
    else
        return false;
}


int main()
{
   int a, b;
   std::cin>>a;
   std::cin>>b;
    //std::cout << assert_equal(a, b) << std::endl;
    //std::cout << assert_nequal(a, b) << std::endl;
    ASSERT_EQUALL(a, b);
    ASSERT_NEQUALL(a, b);
    return 0;
}
