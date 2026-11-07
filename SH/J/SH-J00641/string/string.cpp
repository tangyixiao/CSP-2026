//这一题很明显的注意到不需要修改的是他范围内映射到对面和他字母相同的数量
//写一个类似线段树判定的东西即可。
//n很大，需要挂个二分。 
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct seg
{
	int l,r,col;
};
pair<int,int> get_col(int sr,vector<seg> &S)
{
	int l=0,r=n,mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(S[mid].l<=sr&&S[mid].r>=sr)
		{
			break;
		}
		else if(S[mid].r<sr)
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	//cout<<sr<<" "<<mid<<'\n';
	return {S[mid].l,S[mid].col};
}
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int ns=0;
	int l1;
	char col;
	vector<seg> S(n);
	for(int i=0;i<n;i++)
	{
		cin>>l1>>col;
		S[i]={ns,ns+l1-1,(int)(col-'a')};
		ns+=l1;
	}
	int ans=0;
	for(int i=0;S[i].l<ns;i++)
	{
		int sl=(ns-S[i].r-1),sr=(ns-S[i].l-1);
		if(sl<S[i].l&&sr<S[i].r)
		{
			break;
		}
		while(sr>=sl)
		{
			pair<int,int> rst=get_col(sr,S);
			if(rst.second!=S[i].col)
			{
				ans+=sr-max(rst.first,sl)+1;
			}
			sr=rst.first-1;
		}
	}
	cout<<ans;                                                
	return 0;
}
