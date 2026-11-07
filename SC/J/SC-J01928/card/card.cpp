#include <iostream>
#include <cstring>
#define endl '\n'
using namespace std;
const int N=5e5+5,M=3e5+5;
bool flag[M];
int n,m,top,sta[N],a[N],cnt[M];
void card(int l,int r)
{
	top=0;
	memset(flag,false,sizeof(flag));
	for(int i=l;i<=r;i++)
	{
		if(flag[a[i]])
		{
			while(top>0&&sta[top]!=a[i])
				flag[sta[top--]]=false;
			flag[sta[top--]]=false;
		}
		sta[++top]=a[i];
		flag[a[i]]=true;
	}
	for(int i=1;i<=top;i++)
		cnt[sta[i]]++;
}
/*void print(int cnt[])
{
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	cout<<"\n";
}*/
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		card(i,n);
		//print(cnt);
	}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	return 0;
}