#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n % 1 ==0 && n % n==0){
        cout<<"is not prime number";
    }else cout<<" a prime number";
}