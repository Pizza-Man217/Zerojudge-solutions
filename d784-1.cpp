#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		vector<int>v;
		while(n--){
			int num;cin>>num;
			v.emplace_back(num);
		}
		
		int ans=v[0];
		for(int i=0;i<v.size();i++){
			for(int u=i;u<v.size();u++){
				int temp=0;
				for(int j=i;j<=u;j++){
					temp+=v[j];
				}
				ans=max(ans,temp);
			}
		}
		cout<<ans<<'\n';
	}
}
