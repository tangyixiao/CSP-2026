#include<bits/stdc++.h> // 48 ±©£¿Á¦£¡ 
#define maxn 500005
using namespace std;
stack<int>cards;
int ans[maxn];
bool x[maxn];
int a[maxn];
int n,m;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int l=1;l<=n;l++)
	{
		for(int i=l;i<=n;i++)
		{
			if(x[a[i]])
			{
				while(cards.top()!=a[i])
				{
					x[cards.top()]=false;
					cards.pop();
				}
				x[cards.top()]=false;
				cards.pop();
			}
			cards.push(a[i]);
			x[a[i]]=true;
		}
		while(!cards.empty())
		{
			ans[cards.top()]++;
			x[cards.top()]=false;
			cards.pop();
		}
	}
	for(int i=1;i<m;i++)
		cout<<ans[i]<<' ';
	cout<<ans[m];
	return 0; 
}
/*

¹í³°ÉîÔ¨ Ì¾Ï¢¿õÒ° ÐéÍýÉ½Âö ·ç±©¹Âµº ½û¼ÉÖ®º£ ¡­¡­ 

*/
