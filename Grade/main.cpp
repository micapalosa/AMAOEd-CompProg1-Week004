#include <iostream>

using namespace std;

int main()
{
    int G1, G2, G3, sum=0, Ave=0;
    cout << "Input first Quiz Grade" << endl;
    cin>> G1;
    cout << "Input Second Quiz Grade" << endl;
    cin >> G2;
    cout << "Input Third Quiz Grade" << endl;
    cin >> G3;
    sum=G1+G2+G3;
    Ave=sum/3;
    cout << "The Average grade is " << Ave << endl;

    return 0;
}
