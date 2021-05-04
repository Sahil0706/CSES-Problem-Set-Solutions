//Link to this code: https://cses.fi/paste/86f86a5366e2153a14a0e9/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    if(n==1)
        cout<<"1";
    else if(n<=3)
        cout<<"NO SOLUTION";
    else if(n==4){
        cout<<"2 4 1 3";
    }
    else{
        long int arr[n];
        for(long int i=0;i<n;i++){
            arr[i]=n-i;
        }
        for(int k=0;k<2;k++){
            for(long int i=0;i<n-2-k;i+=2){
                arr[i+k] = arr[i+k]^arr[i+k+1];
                arr[i+k+1] = arr[i+k]^arr[i+k+1];
                arr[i+k] = arr[i+k]^arr[i+k+1];
            }
        }
        for(long int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}
