#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0); 
	
	int start,n1,n2,n3;
	while(cin>>start>>n1>>n2>>n3&&start||n1||n2||n3){
		int ans=0;
		ans+=720; //順時鐘方向轉轉盤2整圈
		ans+=((start-n1+40)%40)*9; //繼續順時鐘方向轉直到到達第一個號碼上
		ans+=360; //逆時鐘方向轉轉盤一整圈
		ans+=((n2-n1+40)%40)*9; //繼續逆時鐘方向轉直到到達第二個號碼
		ans+=((n2-n3+40)%40)*9; //順時鐘方向轉轉盤直到到達第三個號碼
		cout<<ans<<'\n'; //
	}
}