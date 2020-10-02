#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    int N;
    cin>>N;
    cout<<"Lumberjacks:\n";
    while(N--){
        vector<int> v;
        for(int i=0;i<10;i++){
            int n;
            cin>>n;
            v.push_back(n);
        }
        bool a=0,b=0;
        for(int i=0;i<9;i++){
            if(v[i]<v[i+1]) a=1;
            else if(v[i]>v[i+1]) b=1;
        }
        if(a&&b) cout<<"Unordered\n";
        else cout<<"Ordered\n";
    }
}
