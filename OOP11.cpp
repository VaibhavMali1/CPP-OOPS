#include<iostream>
using namespace std;
 
enum Month {January = 1 ,February = 2, March = 3, April = 4, May = 5,
            June = 6, July = 7, August = 8, September = 9, October = 10,
            November = 11, December = 12};
 
int main()
{
    Month month;
    month = August;
 
    cout << "The month is August." << endl;
 
    if (month >= March && month <= May)
        cout << "Yay, It is Spring!" << endl;
    else if (month >= June && month <= August)
        cout << "It is Summer, Who needs an Ice Cream?" << endl;
    else if (month >= September && month <= November)
        cout << "I am enjoying Autumn, Aren't You?" << endl;
    else
        cout << "Ooh, It is very cold outside! It's Winter!" << endl;
}