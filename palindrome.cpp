#include <iostream>
using namespace std;

bool isPalindrome(int x) {
   if (x < 0) {
       return false;
   }

   int rev = 0;
   int Number = x;

   while (x != 0) {
       rev = rev * 10 + x % 10;
       x /= 10;
   }

   return Number == rev;
}

int main() {
   int x;
   cout << "Enter an integer: ";
   cin >> x;

   if (isPalindrome(x)) {
       cout << x << " is a palindrome." << endl;
   } else {
       cout << x << "is not a palindrome." << endl;
   }

   return 0;
}
