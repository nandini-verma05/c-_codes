#include<iostream>
using namespace std;
int main(){
    int i,num,rem,sum=0;
    cout<<"ehtre a number >>";
    cin>>num;
    i=num;
    while(num>0){
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    if(sum==i){
        cout<<"it is a palindrome";
    }else{
        cout<<"it is not a palindrome";
    }
}