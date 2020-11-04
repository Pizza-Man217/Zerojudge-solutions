#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	
	int N,Case=0;
	while(cin>>N){
		vector<int>v(N);
		for(auto &i:v){
			int n;cin>>n;
			i=n;
		}
		long long ans=0;
		for(int i=0;i<N;i++){
			for(int u=0;u<N;u++){
				long long temp=1;
				for(int j=i;j<=u;j++){
					temp*=v[j];
				}
				ans=max(ans,temp);
			}
		}
	cout<<"Case #"<<++Case<<": The maximum product is "<<ans<<".\n\n";
	}
}
