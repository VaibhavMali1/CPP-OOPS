 #include <iostream>
 
class X {
    private:
        int j;
    protected:
        int k;
    public:
        X(int jj = 1, int kk = 2) : j(jj), k(kk) {}
        friend class Y;
        friend void fun();
};
 
class Y {
    int l;
    public:
        Y(int ll = 0) : l(ll) {}
        void change(const X& x);
        void printValue()
        {
            std::cout << "Y::l = " << l << std::endl;
        }
};
 
void Y::change(const X& x)
{
    l = x.j;
    std::cout << "Y::change() : Y::l is now X::j " << std::endl;
}
 
void fun()
{
    X x;
    std::cout << "fun::X::j  = " << x.j << std::endl;
}
 
int main()
{
    X x;
    Y y;
 
    y.printValue();
    fun();
    y.change(x);
    y.printValue();
}