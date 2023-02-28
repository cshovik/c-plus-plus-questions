
#include <iostream>
#include<cmath>
using namespace std;

int main(){
   int arr[100];
   int size ,i ,j,temp;

//input ,  reading the size of array
 cout <<"Enter  array size :";
 cin >> size;

 //reading elements in an array
 cout<<"Enter elements in array ";
 for(i=0 ; i<size ; i++){
       
       cin>>arr[i];
   }
 //sorting an array
 for (i=0;i<size;i++){
   for(j=i+1; j<size; j++){

       if(arr[j]> arr[i]){
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
       }
   }
 } 
 cout<< "Sorting in ascending order "<<'\n';
 for(i=0;i<size;i++){
   cout<<arr[i]<<'\n';
 }
 return 0;
 }
