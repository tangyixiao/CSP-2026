#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50;
int n,x[N],L=0,mid=0;
int pos=0,cnt1=0,cnt2=0,sum[N];
char ch[N];
struct node{
	int sum;
	char ch;
};
vector<node>bv1,bv2;
vector<node>bv;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	sum[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i];
		cin>>ch[i];
		L+=x[i];
		sum[i]=sum[i-1]+x[i];
	}
	mid=(L+1)/2;
	bool f=0;
	for(int i=1;i<=n;i++)
	{
		if(sum[i]<mid) bv.push_back({x[i],ch[i]});
		else
		{
			if(!f)
			{
				if(L%2==0)
				{
					if(mid-sum[i-1]!=0) bv.push_back({mid-sum[i-1],ch[i]});
				}
				else
				{
					if(mid-sum[i-1]-1!=0) bv.push_back({mid-sum[i-1]-1,ch[i]});
				}
				if(sum[i]-mid!=0) bv2.push_back({sum[i]-mid,ch[i]});
				f=1;
			}
			else bv2.push_back({x[i],ch[i]});
		}
	}
	for(int i=bv.size()-1;i>=0;i--)
		bv1.push_back(bv[i]);
	cnt1=0;
	while(1)
	{
		if(bv1.empty()||bv2.empty()) break;
		if(bv1[bv1.size()-1].ch!=bv2[bv2.size()-1].ch)
		{
			if(bv1[bv1.size()-1].sum>bv2[bv2.size()-1].sum)
			{
				cnt1+=bv2[bv2.size()-1].sum;
				bv1[bv1.size()-1].sum-=bv2[bv2.size()-1].sum;
				bv2.pop_back();
			}
			else if(bv1[bv1.size()-1].sum<bv2[bv2.size()-1].sum)
			{
				cnt1+=bv1[bv1.size()-1].sum;
				bv2[bv2.size()-1].sum-=bv1[bv1.size()-1].sum;
				bv1.pop_back();
			}
			else
			{
				cnt1+=bv1[bv1.size()-1].sum;
				bv1.pop_back();
				bv2.pop_back();
			}
		}
		else
		{
			if(bv1[bv1.size()-1].sum>bv2[bv2.size()-1].sum) 
			{
				bv1[bv1.size()-1].sum-=bv2[bv2.size()-1].sum;
				bv2.pop_back();
			}
			else if(bv1[bv1.size()-1].sum<bv2[bv2.size()-1].sum)
			{
				bv2[bv2.size()-1].sum-=bv1[bv1.size()-1].sum;
				bv1.pop_back();
			}
			else
			{
				bv1.pop_back();
				bv2.pop_back();
			}
		}
	}
	cout<<cnt1;
	return 0;
}
