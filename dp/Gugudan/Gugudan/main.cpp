#include <iostream>
using namespace std;

void printTable(int n, int i){
    if(i>=10) return;
    printf("%d * %d = %d\n",n,i,(n*i));
    printTable(n,i+1);
}
int main(){
    printTable(5,1);
}
