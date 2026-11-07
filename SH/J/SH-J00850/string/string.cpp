#include<bits/stdc++.h>
using namespace std;
int n,cnt;
int s[10000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int idx=1,t=0;
	for(int i=1,a;i<=n;i++){
		char b;
		cin>>a>>b;
		t=b-'a'+1;
		s[idx]+=t;
		s[idx+a]-=t;
		idx+=a;
	}
	for(int i=1;i<=idx;i++){
		s[i]+=s[i-1];
	}
	for(int i=1;i<=idx/2;i++){
		if(s[i]!=s[idx+1-i])cnt++;
	}
	cout<<cnt;
	return 0;
}
