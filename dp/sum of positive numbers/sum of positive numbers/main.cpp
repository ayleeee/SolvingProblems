#include <iostream>
using namespace std;

int sum (int n){
    if(n<=0) return 0;
    else if(n==1) return 1;
    else return n+sum(n-1);
}

int main(){
    cout<<sum(5)<<endl;
    cout<<sum(0)<<endl;
}
