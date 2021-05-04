#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long int n;
    cin>>n;
    long int arr[n];
    unsigned int sum=0,original_sum=0;
    for(int i=1;i<n;i++){
        cin>>arr[i-1];
        sum+=arr[i-1];
    }
    original_sum = n*(n+1)/2;
    cout<<original_sum-sum;
 
    return 0;
}



/*
Link to this code: https://cses.fi/paste/46e68ee546cc7e72149f17/
*/
