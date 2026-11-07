#include <bits/stdc++.h>
using std::cin;using std::vector;using std::cout;using std::ios;
#define int long long
#define fastread ios::sync_with_stdio(false),cin.tie(0);
#define freo(a,b) freopen(a,"r",stdin),freopen(b,"w",stdout);
#define pb push_back
#define fi first
#define se second

const int maxn=200005;
const int maxm=500005;
// int first[maxm];
// int a[maxn];
int cnt[maxm];//\\//
int stack[maxn];
int a[maxn];
int p=0;
void push(int x)
{
	stack[p]=x;
	p++;
}
int top()
{
	return stack[p-1];
}
void pop()
{
	p--;
}

int ok[maxm];
int rp[maxm];
signed main()
{
	freo("card.in","card.out")
	fastread
	int n,m;
	cin>>n>>m;
	
	for (int i=0;i<n;i++) cin>>a[i];
	
	for (int s=0;s<n;s++){
	
	
	for (int i=s;i<n;i++)
	{
		
		if (ok[a[i]])
		{
			
			for (;top()!=a[i];)
			{
				ok[top()]=0;
				
				pop();
			}
			
		}
		else
			push(a[i]);
		ok[a[i]]=1;
		
		
	}
	for (;p!=0;)
	{
		rp[top()]++;
		ok[top()]=0;
		pop();
	}
	}
	for (int i=1;i<=m;i++) cout<<rp[i]<<' ';
}
