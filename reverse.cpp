#include<iostream>
using namespace std;

int main()
{
    int num, reversenum = 0, remainder;
    cout << "Enter a number: ";
    cin >> num;

    while(num != 0)
    {
        remainder = num % 10;
        reversenum = reversenum * 10 + remainder;
        num /= 10;
    }

    cout << "Reversed Number: " << reversenum << endl;

    return 0;
}