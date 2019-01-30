#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter an Integer:" << endl;
    cin >> number;
    if (number > 0 )
    {
        cout<< "You Entered a Positive Integer:" <<number<< endl;
    }
    else if (number < 0)
    {
        cout<< "You Entered a Negative Integer:" <<number<< endl;
    }
    else
    {
        cout<< "You Entered 0."<< endl;
    }
    cout<<"This Statement is always executed.";
    return 0;
}
