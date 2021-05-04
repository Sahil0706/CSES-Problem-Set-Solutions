//Link to this code: https://cses.fi/paste/1b08cfd66330b44514b510/
#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long int n,p=1;
    cin>>n;
    for(long int i=0;i<n;i++){
        p=p*2;
        p=p%1000000007;
    }
    cout<<p;
    return 0;
}
