#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=2e5+5;
ll n;
ll st=0,ed=0,skt=0;
int main(){
	freopen("string.in ","r",stdin);//打开输入文件
	freopen("string.out ","w",stdout);//打开输出文件
	
	ios::sync_with_stdio(0);//快读快写
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	struct nde{
		int a;
		char b;
	}s[n];
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].b;
		skt+=s[i].a;
	}
	char c[skt];
	for(int i=1;i<=n;i++){
		ed=st+s[i].a;
		for(int j=st;j<=ed;j++){
			c[j]=s[i].b;
		}
		st=ed;
	}
	ll k=skt-1;
	ll cnt=0;
	for(int i=0;i<skt/2;i++){
		if(c[i]!=c[k]){
			cnt++;
		}
		k--;
	}
	cout<<cnt;
	return 0;
}