#include <iostream>
using namespace std;

int arr[6];

int sum(int arr[],int n){
    if(n<=0) return 0;
    else if(n==1) return arr[n-1];
    else{
        return arr[n-1]+=sum(arr,n-1);
    }
}

int main(){
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    
    sum(arr,6);
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
