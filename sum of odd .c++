#include <iostream>
#include<cmath>
using namespace std;
int main(){
   int n,sum= 0;
   cout<<"Enter positive number";
   cin>>n;

   for (int i=1; i<=n; i++){
       if(i % 2 !=0){
         cout<<i<<",";
         sum +=i;
       }
   }
   cout<<"sum of odd number"<< sum;

   return 0;

}
