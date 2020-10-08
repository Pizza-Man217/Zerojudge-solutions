#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	
	int T; cin>>T;
	while(T--){
		string str; cin>>str;
		int L=0,R=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='(') L++;
			else R++;
			
			if(R>L){	//只要右括號大於左括號，答案必為不正確
				cout<<"0\n";
				break;
			}
			if(i==str.size()-1){
				if(L==R)
					cout<<str.size()/2<<'\n';
				else
					cout<<"0\n";
			}
				
		}
	}
}
