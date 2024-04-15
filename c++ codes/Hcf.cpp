#include<iostream>
using namespace std;
int main(){
    int i ,num1,num2,hcf;
    cout<<"entre two number for hcf>>";
    cin>>num1>>num2;
    for(i=1;i<=num1||i<=num2;i++){
        if(i%num1==0 && i%num2==0){
            hcf=i;
        }
    }
    cout<<"the hcf of given number is>>"<<hcf;
}