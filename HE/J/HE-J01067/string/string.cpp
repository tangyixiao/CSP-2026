#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in ","r",stdin);
	freopen("string.out","w",stdout);
	long long we=1e20;
	char p[we*we]={};
	long long n;
	cin>>n;
	long long b[n+1]={},cnt=0;//cnt为有多少数 
	for(long long i=1;i<=n;i++){//输入 
		cin>>b[i];
		char q;
		cin>>q;
		for(int j=cnt;j<=cnt+b[i];j++) p[j]=q;
		cnt+=b[i];
	}
	long long ans=0;
	for(int i=1;i<=cnt/2;i++){
		if(p[i]!=p[cnt-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
