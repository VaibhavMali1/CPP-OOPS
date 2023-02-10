#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 
class A {
    private:
        int i, j;
    public:    
        A(int ii = 0, int jj = 0) : i(ii), j(jj) {}
        void changeData(int ii, int jj ) {
            i = ii;
            j = jj; 
        }
        string getResponse() const {
            string s;
            stringstream ss;
            ss << "i = " << i << ", j = " << j << "\n";
            s = ss.str();
            return s;
        }
        void makeSomeChanges() const;
 
};
 

 
int main()
{
    A a(10, 20);
 
    cout << "A a(10, 20)           : " << a.getResponse();
    a.changeData(30, 40);
    cout << "A::changeData(30, 40) : " << a.getResponse();
 
    cout << "A::makeSomeChanges()  : " << a.getResponse();
}