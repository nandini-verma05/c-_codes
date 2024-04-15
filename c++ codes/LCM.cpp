#include<iostream>
//lcm of two numbers
using namespace std;
int main(){
    int i ,num1,num2;
    cout<<"entre two numbers for LCM >";
    cin>>num1>>num2;
    if(num1>num2){
        i=num1;
    }
    else{
        i=num2;
    }
    while(1){
        if(num1%i==0 && num2%i==0){
            cout<<"lcm is "<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
  

}