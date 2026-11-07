#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	freopen("string1.in","r",stdin);
	freopen("string1.out","w",stdout);
	int n,c=0;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k;
		char a;
		cin>>k>>a;
		c+=k;
		for(int j=1;j<=k;j++)s+=a;
	}
	int cnt=0;
	if(c%2==0){
		for(int i=0;i*2<c;i++){
			if(s[i]==s[c-i-1])continue;
			cnt++;
		}
	}
	else{
		c--;
		for(int i=0;i*2<c;i++){
			if(s[i]==s[c-i])continue;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
