#include<bits/stdc++.h>
using namespace std;
void algo(long long int n){
    if(n==1){
        cout<<n;
        return;
    }
    cout<<n<<" ";
    if(n%2 == 1)
        algo(n*3 + 1);
    else
        algo(n/2);
}
int main(){
    long int n;
    cin>>n;
    algo(n);
    return 0;
}


/*
Link to this code: https://cses.fi/paste/9a3cb768d2442c0d149ee3/
*/
