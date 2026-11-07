#include<bits/stdc++.h>
using namespace std;
int a[514514],s[514514],ans[514514];
struct poi
{
	int p;int x;
}ton[514514];
bool cmp(poi err,poi ree)
{
	return err.p<ree.p;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int cnt=0;
	for(int i=n;i>=1;i--)
	{
		if(s[a[i]]==0)ton[++cnt]={i,a[i]};
		s[a[i]]++;
	}
	sort(ton+1,ton+m+1,cmp);
	for(int i=1;i<=m;i++)
    {
    	ans[ton[i].x]+=s[ton[i].x];
    	ans[a[ton[i].p+1]]+=ans[ton[i].x];
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
}
/*#include<bits/stdc++.h>
using namespace std;
int a[514514],b[514514];
int main()
{
	int n;cin>>n;
	freopen("card.out","r",stdin);
	for(int i=1;i<=n;i++){
	cin>>a[i];}
	freopen("card4.ans","r",stdin);
	for(int i=1;i<=n;i++)
    {
    	int x;cin>>x;
    	if(x!=a[i])
		{
		cout<<i<<" "<<"number wrong,read "<<x<<" ,expected"<<a[i]<<".";
		return 0;
		}
	}
	cout<<"Accepted ok accepted";
}
free checker 
*/
//yeah I did it!!!!!! AK!!!!!
//I gained 4 toliet chance for CSP-S (I can gain a chance as long as I solve a problem)
