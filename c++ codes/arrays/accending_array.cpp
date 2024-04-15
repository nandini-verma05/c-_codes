#include<iostream>
using namespace std;

int main(){
 int array[100];
 int i,size,elements;
 cout<<"entre the number of elements";
 cin>>size;
 cout<<"entre the elements>>\n";
for(i=0;i<=size;i++){
    cin>>elements;
    array[i]=elements;
}

for ( i = 0; i <= size-1; i++){
    for(int j=i+1;j<=size;j++){
        if(array[i]>array[j]){
            int temp = array[i];
            array[i]=array[j];
            array[j]=temp;
            
        }
    }  
}
for (int i = 0; i < size; i++) {
       cout << array[i] << " ";
}
return 0;
}