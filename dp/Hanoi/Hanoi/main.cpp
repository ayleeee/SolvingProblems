/*
 n-1개의 원반을 D를 거쳐서 S에서 E로 옮기기
 n번째의 원반을 S에서 D로 옮기기
 n-1개의 원반을 S를 거쳐서 D로 옮기기
 */

#include <iostream>
using namespace std;

void towerOfHanoi(char s, char d, char e, int n){
    if(n<=0) return;
    towerOfHanoi(s, e, d, n-1);
    printf("%d번 원반을 %c에서 %c로 옮깁니다.\n",n,s,d);
    towerOfHanoi(e, d, s, n-1);
}

int main(){
    towerOfHanoi('s', 'd', 'e', 3);
}
