#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    int n;
    cin>>n;
    while(n--){
        int f;
        cin>>f;
        long long ans=0;
        while(f--){
            long long n0,n1,n2;
            cin>>n0>>n1>>n2;
            ans+=n0*n2;
        }
        cout<<ans<<'\n';
    }
}