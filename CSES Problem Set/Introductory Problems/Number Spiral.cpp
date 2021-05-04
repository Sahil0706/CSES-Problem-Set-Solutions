//Link to this code: https://cses.fi/paste/e5aa0cd4a524422d14a21e/
#include<bits/stdc++.h>
using namespace std;
//diagonal elementis 1,2,4,6,8,10,12,14,16,
int main(){
    long int test;
    cin>>test;
    for(long int t=0;t<test;t++){
        long long int x,y;
        long long int maxi,dnum=1;
        cin>>x;
        cin>>y;
        maxi=max(x,y);
        dnum = maxi*(maxi-1)+1;
        if(abs(x-y)>0){
            int temp;
            if(maxi%2 == 0)
                temp=-1;
            else
                temp=1;
            while(x>y){
                dnum-=temp;
                x--;
            }
            while(y>x){
                dnum+=temp;
                y--;
            }
        }
        cout<<dnum<<"\n";
    }
    return 0;
}
