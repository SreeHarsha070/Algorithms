#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int res=0;
    long int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    for(int i=5;i<=n;i=i*5){
        res+=n/i;
    }
    cout<<"Number of Trailing Zeroes of factorial of " <<n<<" are "<<res<12<endl;
}
