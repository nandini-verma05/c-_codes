#include<iostream>
using namespace std;
int main(){
    int i,num,multi=1,j;
    cout<<"entre the number for the table";
    cin>>num;
    for(i=1;i<=10;i++){
        for(j=1;j<=num;j++){
        multi=i*num;
    }
    cout<<"\n"<<multi;
}
}

