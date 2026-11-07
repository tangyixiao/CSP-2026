#include <iostream>
using namespace std;
const int N = 5e5 + 5;
const int M = 3e5 + 5;
int n,m;
int a[N];
int pre[M];//值为m的数的上一个相同值的数的位置 
int suf[N];//该数上一个相同的数的位置 
long long ans[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i<M;i++)
		pre[i] = 0; 
	for(int i = 0;i<N;i++)
		suf[i] = 0;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i];
		suf[pre[a[i]]] = i;//下一个值相同 
		pre[a[i]] = i;//作为上一个值相同 
	}
	int cur;
	for(int ite = 1;ite<=n;ite++)
	{
		cur = a[ite];
		for(int i = ite;i<=n;i++)
		{
			while(suf[i] != 0)
			{
				i = suf[i];
			}
			cur = a[i];
			ans[cur]++;
		}
	}
	for(int i = 1;i<=m;i++)
	{
		cout << ans[i] << ' '; 
	}
}