#include<bits/stdc++.h>
#define N 200005
#define ll long long
//T2ÖØ¹¹68´úÂë
using namespace std;
struct Node
{
	ll l,r;
	char val;
};
vector<Node>np;
//vector<ll>t;
int n,a,npl=0,npr;
ll s=1,ans;
char c;
//void disc()
//{
//	sort(t.begin(),t.end());
//	t.erase(unique(t.begin(),t.end()),t.end());
//	for(Node&v:np)
//	{
//		v.l=lower_bound(t.begin(),t.end(),v.l)-t.begin();
//		v.r=lower_bound(t.begin(),t.end(),v.r)-t.begin();
//	}
//}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
//	t.push_back(1);
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		np.push_back({s,s+a-1,c});
		npr++;
//		t.push_back(s+a-1);
		s+=a;
	}
	npr--;
	for(ll l=1,r=s-1;l<=r;l++,r--)
	{
		while(np[npl].r<l)
		{
			npl++;
		}
		while(np[npr].l>r)
		{
			npr--;
		}
		ans+=np[npl].val!=np[npr].val;
	}
	cout<<ans;
	return 0;
}
