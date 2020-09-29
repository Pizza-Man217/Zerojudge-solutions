#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0); 
	
	int start,n1,n2,n3;
	while(cin>>start>>n1>>n2>>n3&&start||n1||n2||n3){
		int ans=0;
		ans+=720; 
		ans+=((start-n1+40)%40)*9;
		ans+=360;
		ans+=((n2-n1+40)%40)*9;
		ans+=((n2-n3+40)%40)*9;
		cout<<ans<<'\n';
	}
}