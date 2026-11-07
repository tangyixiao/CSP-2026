#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	string S;
	for(int i=1;i<=n;i++){
		int nx;
		char ni;
		cin>>nx>>ni;
		for(int j=1;j<=nx;j++) S[i]+=ni;
	}
	for(int i=1;i<=n;i++){
		if(S[i]==S[i-1]) continue;
		else sum++;
	}
	cout<<sum;
	return 0;
}
