#include<bits/stdc++.h>
using namespace std;
unsigned long long ulrd() {
	unsigned long long x=0;char c='l';
	while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')x=x*10+c-'0',c=getchar();
	return x;
}
char crd() {
	char c=' ';
	while(c=='\t'||c=='\n'||c==' ')c=getchar();
	return c;
}
int n,m;
int a[500005];
int mp[300005];
int ans[300005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=ulrd(),m=ulrd();
	for(int i=1;i<=n;i++)a[i]=ulrd(),mp[a[i]]=max(mp[a[i]],i);
	
	for(auto&i:mp){
//		cout<<i.first<<' '<<i.second<<'\n';
	}
//	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			j=mp[a[j]];
			ans[a[j]]++;
//			cout<<j<<' ';
		}
//		for(int i=1;i<=m;i++)cout<<ans[i]<<' ';putchar('\n');
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}