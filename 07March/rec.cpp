#include<bits/stdc++.h>
using namespace std; 

int rec(int n){
    if (n==1) return 1;
    else rec(n-1) + n;
}

int main(){
    cout << rec(5) ;
}