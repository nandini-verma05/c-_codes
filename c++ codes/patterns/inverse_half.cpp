#include<iostream>
using namespace std;
int main(){
    int i,j,rows;
    cout<<"entre the number of rows";
    cin>>rows;
    for(i=1;i<=rows;i++){
        cout<<"\n";
        for(j=i;j<=rows;j++){
            cout<<"*";
        }
    }


}