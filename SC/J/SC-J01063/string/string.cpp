#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);


	//insert eraser
	int n;
	cin>>n;
	string S;
	
	long long sum=0;
	for(int i=1;i<=n;++i){
		int x;
		char c;
		
		cin>>x>>c;
		sum+=x;
		for(int j=1;j<=x;++j){
			S.push_back(c);
		}
	}
	int cnt=0;
	for(int i=0;i<(S.length()+1)/2;++i){
		if(S[i]!=S[sum-i-1])cnt++;
	}
	if(cnt==0){
		cout<<0<<'\n';
	}else{
		cout<<cnt<<'\n';
	}
	return 0;
}

