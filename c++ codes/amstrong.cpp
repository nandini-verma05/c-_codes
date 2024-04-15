#include<iostream>
using namespace std;
int main(){
    int i ,num,rem,sum=0,temp;
    cout<<"entre the number >>";
    cin>>num;
    temp=num;
    while(temp!=0){
       rem=temp%10;
       sum=sum +rem*rem*rem;
       temp=temp/10;
    }
    if (sum==num){
        cout<<"it is amstrong number";
    }
    else{
        cout<<"it is not a amstrong number";
    }
}