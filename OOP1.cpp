
#include <iostream>
using namespace std;
 
class Abstract {
    int i, j;
    public:
        virtual void setData(int i = 0, int j = 0) = 0;
        virtual void printData() = 0;
};
 
class Derived : public Abstract {
    int i, j;
    public:
        Derived(int ii = 0, int jj = 0) : i(ii), j(jj)
        {
            cout << "Creating object " << endl;
        }
        void setData(int ii = 0, int jj = 0)
        {
            i = ii;
            j = jj;
        }
        void printData()
        {
            cout << "Derived::i = " << i << endl
                 << "Derived::j = " << j << endl;
        }
};
 
int main()
{
 
    Derived d;
 
    cout << "Current data " << endl;
    d.printData();
    d.setData(10, 20);
    cout << "New data " << endl;
    d.printData();
}