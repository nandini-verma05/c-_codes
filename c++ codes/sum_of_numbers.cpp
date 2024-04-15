#include<iostream>
using namespace std;
int main(){ 
    int i,num,sum=0;
    cout<<"entre the number of terms to be added>>";
    cin>>num;
    for(i=0;i<=num;i++){
        sum=sum+i;
    }
cout<<"the sum is"<<sum;
}