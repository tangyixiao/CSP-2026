#include<bits/stdc++.h>
using namespace std;
long long s[200010];
bool cmp(long long a,long long b){return a>b;}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>s[i];
	sort(s+1,s+n+1,cmp);
	long long ans=s[1];
	for(int i=2;i<=m;i++)ans&=s[i];
	cout<<ans;
	return 0;
} 
