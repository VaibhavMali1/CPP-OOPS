#include <iostream>
 
class A {
    int i;
    public:
        A(int ii = 0) : i(ii)
        {
            std::cout << "A::A" << i << "() constructor "
                      << std::endl;
        }
        ~A()
        {
            std::cout << "A::~A" << i << "() destructor "
                      << std::endl;
        }
};
 
A a1(1);
 
int main()
{
    A a2(2);
}