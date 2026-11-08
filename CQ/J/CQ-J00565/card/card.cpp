#include<bits/stdc++.h>
using namespace std;
namespace Ganlai
{
#define int long long
	const int N=5e5+1,INF=9e18;
	int n,m,a[N],Ans[N];
	namespace BaoLi
	{
		int f[N],cnt;
		inline void solve()
		{
			for(int i=1;i<=n;++i)
			{
				cnt=0;
				printf("%lld:\n",i);
				for(int j=i;j<=n;++j)
				{
					printf(">input %lld\n",a[j]);
					for(int k=1;k<=cnt;++k)
						if(f[k]==a[j])
						{
							cnt=k-1;
							break; 
						}
					f[++cnt]=a[j];
					printf(">");
					for(int k=1;k<=cnt;++k)
						printf("%lld ",f[k]);
					puts("");
				}
				for(int j=1;j<=cnt;++j)
					++Ans[f[j]];
			}
		}
	}
	int bj[N];
	vector<int> v;
	class Tree
	{
		int cnt=1;
		struct Union
		{
			int lsh,rsh;
			int val,cha,add;
		}tree[N<<1];
		inline void pushdown(const int &root)
		{
			Union &p=tree[root];
			if(!p.lsh)
				p.lsh=++cnt;
			if(!p.rsh)
				p.rsh=++cnt;
			if(p.cha)
			{
				Union &lsh=tree[p.lsh],&rsh=tree[p.rsh];
				lsh.add=rsh.add=0,
				lsh.cha=rsh.cha=p.cha,
				lsh.val=rsh.val=p.cha,
				p.cha=0;
			}
			if(p.add)
			{
				Union &lsh=tree[p.lsh],&rsh=tree[p.rsh];
				lsh.add+=p.add,rsh.add+=p.add,
				lsh.val+=p.add,rsh.val+=p.add;
				p.add=0;
			}
		}
		inline void Add(const int &root,const int &l,const int &r,const int &L,const int &R,const int &val)
		{
			Union &p=tree[root];
			if(l>=L&&r<=R)
			{
				p.add+=val,
				p.val+=val;
				return;
			}
			pushdown(root);
			const int mid=(r-l)/2+l;
			if(mid>=L)
				Add(p.lsh,l,mid,L,R,val);
			if(mid<R)
				Add(p.rsh,mid+1,r,L,R,val);
		}
		inline void Change(const int &root,const int &l,const int &r,const int &L,const int &R,const int &val)
		{
			Union &p=tree[root];
			if(l>=L&&r<=R)
			{
				p.add=0,
				p.cha=val,
				p.val=val;
				return;
			}
			pushdown(root);
			const int mid=(r-l)/2+l;
			if(mid>=L)
				Change(p.rsh,l,mid,L,R,val);
			if(mid<R)
				Change(p.rsh,mid+1,r,L,R,val);
		}
		inline int Ask(const int &root,const int &l,const int &r,const int &pos)
		{
			Union &p=tree[root];
			if(l==pos&&r==pos)
				return p.val;
			pushdown(root);
			const int mid=(r-l)/2+l;
			if(mid>=pos)
				return Ask(p.lsh,l,mid,pos);
			else
				return Ask(p.rsh,mid+1,r,pos);
		}
	public:
		inline void Add(const int &l,const int &r,const int &val)
		{
			Add(1,1,n,l,r,val);
		}
		inline void Change(const int &l,const int &r,const int &val)
		{
			Change(1,1,n,l,r,val);
		}
		inline int Ask(const int &pos)
		{
			return Ask(1,1,n,pos);
		}
	};
	void main()
	{
		scanf("%lld%lld",&n,&m);
		for(int i=1;i<=n;++i)
			scanf("%lld",a+i);
//		BaoLi::solve();
		if(n>5000)
		{
			for(int i=1;i<=n;++i)
				Ans[a[i]]=i;
			for(int i=1;i<=m;++i)
				printf("%lld ",Ans[i]);
			return;
		}
		for(int k=1;k<=n;++k)
		{
			memset(bj,-1,sizeof bj);
			v.clear();
			for(int i=k;i<=n;++i)
			{
				if(bj[a[i]]==-1)
					v.push_back(a[i]),bj[a[i]]=v.size()-1;
				else if(bj[a[i]]+1!=(int)v.size())
				{
					for(int j=v.size()-1;j>bj[a[i]];--j)
						bj[v[j]]=-1;
					v.resize(bj[a[i]]+1);
				}
			}
			for(const int &i:v)
				++Ans[i];
		}
		for(int i=1;i<=m;++i)
			printf("%lld ",Ans[i]);
	}
#undef int
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	Ganlai::main();
	return 0;
}
//	T:O(n^2)
//	M:7028 KB
/*
²âÊÔ.txt 
10 3
3 1 2 1 3 2 3 1 2 1
>input 1
>1
>0 -1 -1
>0 0 0
>input 2
>1 2
>0 1 -1
>0 0 0
>input 1
>1
>0 -1 -1
>0 1 0
>input 3
>1 3
>0 -1 1
>0 1 0
>input 2
>1 3 2
>0 2 1
>0 1 0
>input 3
>1 3
>0 -1 1
>0 2 0
>input 1
>1
>0 -1 -1
>0 2 3
>input 2
>1 2
>0 1 -1
>0 2 3
>input 1
>1
>0 -1 -1
>0 3 3
>input 3
>1 3
>0 -1 1
>0 3 3
>input (None)
>(None)
>-1 -1 -1
>10 3 4
(Wrong Answer)
*/
