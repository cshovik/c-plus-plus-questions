//palindrome
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
   int n,num,digit,rev = 0;
   cout<<"Enter positive number";
   cin>>num;

   n=num;

   do{
      digit = num % 10;
      rev = (rev*10)+digit;
      num = num/10;

   }while(num!=0);

   cout<< "the reverseble digit is "<<rev<<'\n';

   if(n==rev)
      cout << "The number is palindrome. ";

   else
      cout<<"The number is not palindrome";

   return 0;

}
