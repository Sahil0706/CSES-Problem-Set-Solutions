#include<bits/stdc++.h>
using namespace std;
 
int main(){
    unsigned int local=1,maxi=0;
    string s;
    cin>>s;
    for(long int i=0;i<s.length()-1;i++){
        if(s[i] == s[i+1])
            local+=1;
        else
            local = 1;
        
        maxi=max(local,maxi);
    }
    maxi=max(local,maxi);
    cout<<maxi;
    return 0;
}

/*
Link to this code: https://cses.fi/paste/fd512287bba9979c149f43/
*/
