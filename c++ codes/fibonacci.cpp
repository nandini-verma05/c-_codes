#include<iostream>
using namespace std;
int main(){
    int i,num,a=0,b=1,c=0;
    cout<<"entre the term >>";
    cin>>num;
    cout<<"the fibbonacci sequence is \n"<< a <<"\n"<< b;
    for(i=3;i<=num;i++){
        c=a+b;
        cout<< "\n" <<c; 
        a=b;
        b=c;
       
    }
    return 0;

}