#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    int T,Case=0;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> v;
        while(n--){
            int num;
            cin>>num;
            v.emplace_back(num);
        }
        int high=0,low=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]<v[i+1]) high++;
            else if(v[i]>v[i+1]) low++;
        }
        cout<<"Case "<<++Case<<": "<<high<<' '<<low<<'\n';
    }
}
