#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	
	
	int n=0,Set=0;
	while(cin>>n && n){
		vector<int> arr;
		int std=0;
		while(n--){
			int num;
			cin>>num;
			std+=num;
			arr.push_back(num);
		}
		std/=arr.size();
		int ans=0;
		for(auto i:arr){
			if(i>std) ans+=i-std;
		}
		
		cout<<"Set #"<<++Set<<"\nThe minimum number of moves is "<<ans<<".\n\n";
		
	}
}