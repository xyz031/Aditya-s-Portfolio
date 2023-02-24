#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"



int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
          ll n,k;
           cin>>n>>k;
    ll tot=(n+1);
    if((1-n)<=k and k<=(n+1))
    {
        if(k==0){
            ll m=(n-1);
            while(m--){ cout<<"*";}
            cout<<"-"<<endl;
          
        }
       else if(k<0){
            ll s=abs(k)+1;
            ll m=n-s;
            while(s--){ cout<<"-";}
            while(m--){ cout<<"*";}
            cout<<endl;
          
        }
        
        
       else if(k>0){
            ll p=abs(k)-1;
            ll m=n-p;
            while(p--) {cout<<"+";}
            while(m--) {cout<<"*";}
            cout<<endl;
          
        }
        
        
    }
    else
    {cout<<-1<<endl;}
    }
    return 0;
}