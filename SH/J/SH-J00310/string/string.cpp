#include<bits/stdc++.h>
using namespace std;

long long n,ai[1000000],num=0,ans=0;
char s[1000000000],now;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for(int i=1;i<=n;i++){
		cin>>ai[i]>>now;
		for(int j=num+1;j<=num+ai[i];j++){
			s[j]=now;
		}
		num+=ai[i];
	}

	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=num/2;i++){
		if(s[i]!=s[num+1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
