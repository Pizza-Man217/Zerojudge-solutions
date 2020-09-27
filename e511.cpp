#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		vector<int> v;
		while(n--){
			int xi;
			cin>>xi;
			v.push_back(xi);
		}
		sort(v.begin(),v.end());
		cout<<*((v.end()-1)-*v.begin())*2<<'\n';
	}
}
