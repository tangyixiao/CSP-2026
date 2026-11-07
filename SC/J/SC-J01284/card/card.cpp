#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e5+5,MAXM=5e5+5;
long long ljy[MAXN],zjk[MAXM],zyx[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>zjk[i];
		zyx[zjk[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			j=zyx[zjk[j]];
			ljy[zjk[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ljy[i]<<" ";
	}
	cout<<endl;
	return 0;
}