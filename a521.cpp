#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	freopen("a.in","r",stdin);
	
	string str;
	while(cin>>str){
		for(int ST=1;ST<=10000;ST++){
			vector<int> v;
			for(auto i:str){
				v.emplace_back(i-'A'+ST);
			}
			int size=v.size();
			while(size>2){
				if(size==3&&v[0]==1&&v[1]==0&&v[2]==0){
					cout<<ST<<'\n';
					break;
				}
				for(int i=0;i<size-1;i+=2){
					v[i]=(v[i]+v[i+1])%10;
				}
				size--;
			}
			if(ST==10000) cout<<":)\n";
		}
	}
}