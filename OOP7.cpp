#include <iostream>
 
class A {
    private:
        int i;
        mutable int j;
    public:
        A(int ii = 0, int jj = 1) : i(ii), j(jj) { }
        void change() const;
        void print();
};
 
void A::change() const
{
    j++;
}
 
void A::print()
{
    std::cout << "A::i = " << i << std::endl
              << "A::j = " << j << std::endl;
}
 
int main()
{
    A a;
 
    std::cout << "Before A::change()" << std::endl;
    a.print();
    a.change();
    std::cout << "After  A::change()" << std::endl;
    a.print();
}