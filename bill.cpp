#include<iostream>
using namespace std;

int main()
{
    float num1, num2, num3 , n1, n2, n3;
    float total;
    float gst;
    float TotalWithGst;
    cout << "Enter cost of pencil and quantity: ";
    cin >> num1 >> n1;
    cout << "Enter cost of pen and quantity: ";
    cin >> num2 >> n2;
    cout << "Enter cost of notebook and quantity: ";
    cin >> num3 >> n3;
    total = (num1*n1)+(num2*n2)+(num3*n3);
    gst = (float)(18*total)/100;
    TotalWithGst = total+gst;

    cout <<"Your Bill is:";
    cout <<"total:"<< total <<"TotalWithGst:" <<TotalWithGst <<endl;

    return 0;
}