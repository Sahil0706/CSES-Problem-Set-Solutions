//Link to this code: https://cses.fi/paste/d5175e3f5668eea214a238/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cout<<(i-1)*(i+4)*(i*i - 3*i + 4)/2<<"\n";
    return 0;
}
