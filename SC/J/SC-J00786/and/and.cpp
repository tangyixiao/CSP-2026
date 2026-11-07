#include<bits/stdc++.h>
using namespace std;
int a[200005],n,m,b[35],cnt=0,f[200005];
vector<int> v[35];
int zhl(int x){
	memset(b,0,sizeof(b));
	for(int i=x;i>=0;i--)v[i].resize(0);
	for(int i=1;i<=n;i++)
		if(f[i]==cnt)
			for(int j=x;j>=0;j--)
				if(a[i]&(1<<j))
					b[j]++,v[j].push_back(i);
	int k=30;
	for(int i=x;i>=0;i--)if(b[i]>=m){k=i;break;}
	if(k==30)return 0;
	cnt++;
	for(int i:v[k])f[i]=cnt;
	return ((1<<k)|zhl(k-1));
}
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	cout<<zhl(29);
	return 0;
}
