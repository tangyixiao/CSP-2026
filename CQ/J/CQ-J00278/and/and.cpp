#include<bits/stdc++.h>
using namespace std;
long long a[300000],ans=0,n,m;
void dg(int sc,long long yyq)
{
	int q=sc-1;
	for(;q>=-1;q--)
	{
		if(q==-1)
		{
			ans=yyq;
			return;
		}
		int sl=0,yq=yyq|(1<<q);
		for(int w=1;w<=n;w++) if((a[w]&yq)==yq) sl++;
		if(sl>=m)
		{
			break;
		}
	}
	dg(q,yyq|(1<<q));
}
int main()
{
	//*
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//*/
	//*
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//*/
	cin>>n>>m;
	for(int q=1;q<=n;q++) cin>>a[q];
	dg(30,0ll);
	cout<<ans;
	return 0;
}
/*
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
freeopen("and.in","r",stdin);freeopen("and.out","w",stdout);
*/
/*
me want shang mi huo xing wei da shang
awa awa
my hao is *******,i not want say

i love CCF
*/
