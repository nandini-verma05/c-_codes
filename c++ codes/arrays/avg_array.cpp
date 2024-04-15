#include<iostream>
using namespace std;

int main(){
 int array[100];
 int n,i,sum=0;
 float avg;
 cout<<"entre the size of the array=";
 cin>>n;
 cout<<"entre the elements oa array";
 for(i=0;i<n;i++){
    cin>>array[i];
 }
 for(i=0;i<n;i++){
    sum=sum+array[i];
 }
 avg=sum/n;
 cout<<"the avg of the array is="<<avg;
return 0;
}