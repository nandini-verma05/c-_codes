#include<iostream>
using namespace std;

int main(){
    int array[10];
    int i,n,max,min;
    cout<<"entre the size of the array";
    cin>>n;
    cout<<"entre the elements of array=";
    for(i=0;i<n;i++){
        cin>>array[i];
        max=array[0];
    }
    for(i=0;i<n;i++){
        if(max<array[i]){
           max=array[i];
    }
    }
    min=array[0];
    for(i=0;i<n;i++){
        if(min>array[i]){
            min=array[i];
        }
    }
     cout<<"maximum number is "<<max<<endl;
      cout<<"the minimum number is "<<min<<endl;



return 0;
}