//Link to this code: https://cses.fi/paste/08ccb32462d1eee714b42f/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,count=0,d,k=5;
    cin>>n;
    d=n/k;
    while(d!=0){
        count+=d;
        k*=5;
        d=n/k;
    }
    cout<<count;
    return 0;
}
