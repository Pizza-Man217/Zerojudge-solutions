#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    int n;
    while(cin>>n&&n){
        while(n>=10){
            long long temp=0;
            while(n){
                temp+=n%10;
                n/=10;
            }
            n=temp;
        }
        cout<<n<<'\n';
    }
}
