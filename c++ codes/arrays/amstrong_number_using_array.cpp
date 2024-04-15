#include<iostream>
using namespace std;

int main(){
int arr[10];
int i,rem,sum=0,num;
cout<<"entre the number>>"<<endl;
for(i=0;i<10;i++){
cin>>arr[i];
}
for(i=0;i<=10;i++){
    num=arr[i];
    while(num>0){
    rem=num%10;
    sum=sum+(rem*rem*rem);
    num=num/10;
}
if(arr[i]==sum){
    cout<<"it is a amstrong number";
}
else{
    cout<<"it is not";
}
}

return 0;
}