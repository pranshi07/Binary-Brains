#include<iostream>
using namespace std;

int main()
{
    int n, i, sumEven = 0, sumOdd = 0;
    cout << "Enter the number of integers: ";
    cin >> n;

    cout << "Enter each integer: ";
    for(i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if(num % 2 == 0)
            sumEven += num;
        else
            sumOdd += num;
    }

    cout << "Sum of even integers: " << sumEven << endl;
    cout << "Sum of odd integers: " << sumOdd << endl;

    return 0;
}