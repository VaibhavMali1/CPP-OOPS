#include <iostream>
using namespace std;
 
class Base {
    int i;
    public:
        Base(int ii = 0): i(ii) { }
        Base(const Base& b)
        {
            this->i = b.i;
        }
        void setData(int ii) { i = ii; }
        int getData() { return i; }
};
 
int main()
{
    Base b;
 
    cout << "b::getData = " << b.getData() << endl;
    cout << "b::setData = 10" << endl;
    b.setData(10);
    cout << "b::getData = " << b.getData() << endl;
    cout << "Calling copy-constructor on c" << endl;
    Base c(b);
    cout << "c::getData = " << c.getData() << endl;
}
