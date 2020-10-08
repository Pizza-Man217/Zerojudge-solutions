#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	
	int T; cin>>T;
	while(T--){
		string str; cin>>str;
		stack<char> st;
		int ans=0;
		for(auto i:str){
			if(i=='('){
				st.push(i);
				ans++;
			}
			else{
				if(!st.empty()&&st.top()=='(') st.pop();
				else st.push(i);
			}
		}
		if(st.empty()) cout<<ans<<'\n';
		else cout<<"0\n";
	}
}
