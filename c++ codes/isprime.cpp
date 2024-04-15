#include<iostream>
using namespace std;
int main(){
    int i , num,isprime=0;
    cout<<"entre the number>>";
    cin>>num;
    if(num==1 || num==0){
        isprime=1;
    }
    
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            isprime=1;
        } 
    }
    if(isprime==0){
        cout<<"the given number is  prime number";
    }
    else{
        cout<<"the given number is not a prime number";
    }
}
