#include <iostream>
#include <string>
using namespace std;
 
class Abstract {
    private:
        string info;
    public:
        virtual void printContent() = 0; 
};
 
class Concrete {
    private:
        string info;
    public:
        Concrete(string s) : info(s) { }
        void printContent() {
            cout << "Concrete Object Information\n" << info << endl;
        }
};
 
int main()
{

    string s;
 
    s = "Object Creation Date : 23:26 PM 15 Dec 2013";
    Concrete c(s);
    c. printContent();
}