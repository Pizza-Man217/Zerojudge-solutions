#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	
	string str;
	while(getline(cin,str)){
		int ans=0;
		for(int i=1;i<str.size();i++){
			if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
				if((str[i-1]>='A'&&str[i-1]<='Z'||str[i-1]>='a'&&str[i-1]<='z')==0)
					ans++;
			}
		}
		if(str[0]>='A'&&str[0]<='Z'||str[0]>='a'&&str[0]<='z')
			ans++;
		cout<<ans<<'\n';
	}
}
