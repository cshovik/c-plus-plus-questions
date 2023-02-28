#include <iostream>
#include<cmath>
using namespace std;
int main(){
   int n,sum= 0;
   cout<<"Enter positive number";
   cin>>n;

   for (int i=1; i<=n; i++){
      sum += (i*2);
   }
   cout<<"sum of even number"<< sum;

   return 0;



}
