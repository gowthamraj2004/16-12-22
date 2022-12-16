#include<iostream>
using namespace std;
int main(){
    int a,arr[100],max,i;
    cin>>a;
    for (i=0;i<a;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(i=1;i<a;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<max<<" is the maximum element in the array.";
}