#include<bits/stdc++.h>

using namespace std;
const int N=5e5+5;
int last[N],color[N],n,m,a[N],cnt[N];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		last[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		int j=i;
		while(j<=n){
			j=last[a[j]];
			cnt[a[j]]++;
			j+=1;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
}
