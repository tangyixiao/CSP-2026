#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[300005],rd[300005];
void clean()
{
	for(int i=1;i<=m;i++)
		rd[i]=0;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			rd[a[j]]++;
			int p=j-1;
			if(rd[a[j]]>=2){
			while(a[p]!=a[j]){
				rd[a[p]]--;
				p--;
			}rd[a[p]]--;
			}
		}for(int i=1;i<=m;i++){
			if(rd[i]==1)
			cnt[i]++;
		}clean();
	}for(int i=1;i<=m;i++)
		cout<<cnt[i]<<' ';
	return 0;
}
