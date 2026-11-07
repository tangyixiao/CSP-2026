#include<bits/stdc++.h>//3
using namespace std;
typedef long long ll;

const int N=4*1e5+16;
const int L=136;

int n,m;//n个非负整数 ，选m个，m<=n 
struct node{
	ll v;
	string s;//L //下标从0开始 
	int cnt;
}a[N];

char tmp[L];//下标从1开始 

void get_str(ll x,int idx)
{
	a[idx].s="                                       ";
	for(int i=0;i<31;i++)
	{
		a[idx].s[i]='2';
		tmp[i+1]='2';
	}
	
	int len=0;
	while(x)
	{
		if(x&1)//if x%2==1 
		{
			tmp[++len]='1';
			++a[idx].cnt;
		}else ++len;
		x>>=1;//x/=2;
	}
	for(int i=1;i<=31;i++)
	{
		a[idx].s[i-1]=tmp[31-i+1];
	}
	return;
}

bool cmp(node x,node y)
{
	if(x.cnt>y.cnt) return 1;
	if(x.cnt<y.cnt) return 0;
	if(x.cnt==y.cnt) return x.s<y.s; 
}

int num[L];
ll ans;

ll cf2[L]=
{
	1,2,4,8,16,32,64,128,256,512,1024,
	2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,
	4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,
	1073741824};

ll mx;
ll all;




mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
int rnd(int l,int r)
{
	return uniform_int_distribution<int> (l,r)(rng);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].v;
		
		if(i==1) all=a[i].v;
		else all=all&a[i].v;
		mx=max(mx,a[i].v);
	}
	
	if(m==1)
	{
		cout<<mx;
		return 0;
	}
	if(m==n)
	{
		cout<<all;
		return 0;
	}
	if(n<=2000&&m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)
				{
					ans=max(ans,a[i].v&a[j].v);
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(n<=20)
	{
		int k=2666666;
		while(k--)
		{
			for(int i=1;i<=n;i++)
			{
				int sjs=rnd(1,20);
				swap(a[i].v,a[sjs].v);
			}
			ll sum=a[1].v;
			for(int i=2;i<=m;i++)
			{
				sum&=a[i].v;
			}
			ans=max(ans,sum);
		}
		cout<<ans;
		return 0; 
	}
	
	
	
	for(int i=1;i<=n;i++)
	{
		get_str(a[i].v,i);
	}
	
	sort(a+1,a+1+n,cmp);
	
	for(int i=1;i<=m;i++)
	{
		for(int j=0;j<31;j++)
		{
			if(a[i].s[j]=='1') ++num[j];
		}
	}
	
	for(int i=1;i<=31;i++)
	{
		if(num[i-1]==m)
		{
			ans+=cf2[31-i];
		}
	}
	cout<<ans;
	
	return 0;
}
/*
6 7 8 9 10 13 

样例 
a[i]为0 

4 2
3 15 12 12

4 2
3 15 12 16

5 3
31 3 1 15 7

5 5
31 3 1 15 7

5 1
31 3 1 15 7

4 2
3 15 0 0


& 都是1才是1，有0则0

1 1   1 
1 0   0 
0 1   0 
0 0   0
*/