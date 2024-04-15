#include<iostream>
using namespace std;



int getMissingNumber(int *array, int size){
    int i,sum=0,n=size+1;
    for(i=0;i<size;i++){
        sum=sum+array[i];
    }
    return (n*(n+1))/2-sum;

}
int main(){
    int array[9]={1,2,3,4,5,6,8,9,10};
    cout<<"the missing number is>>"<<getMissingNumber(array,9)<<endl;

return 0;
}