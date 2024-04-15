#include<iostream>
using namespace std;
int main(){
    int i,j,rows;
    cout<<"entre the number of rows>>";
    cin>>rows;
    for(i=0;i<=rows;i++){
        cout<<"\n";
        for(j=1;j<=i;j++){
            cout<<"*";
        }
    }
}