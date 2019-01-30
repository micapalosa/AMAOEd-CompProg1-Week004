#include <iostream>

using namespace std;

int main()
{
    int number =143;
    cout << "Guess The Magic Number";
    cin>> number;
    if (number ==143)
    {
        cout<< " I Love You:" <<number << endl;
    }
    else
    {
         cout<< "Sorry, better Luck Next Time:" <<number<<endl;
    }

    return 0;
}
