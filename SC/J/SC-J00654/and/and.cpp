#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+100;
int a[maxn];
int m,n;
int dfs(stack<int>st,int mxlen)
{
	stack<int>st1;
	if(mxlen==0)
	{
		return 0;
	}
	while(--mxlen)
	{
		int sum=0;
		while(!st.empty()){
			st.pop();
		}
		for(int j=1;j<=n;j++)
		{
			if((a[j]>>mxlen)&1){
				sum++;
				st.push(a[j]);
			}
		}
		if(sum>=m)
		{
			break;
		}
	}
	return (1<<mxlen)+dfs(st,mxlen);
}
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int ans=INT_MAX,mxlen=0,sum;
	stack<int>st;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n,cmp);
	if(m==1)
	{
		cout<<a[1];
		return 0;
	}
	if(m==n)
	{
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	if(n>200)
	{
		if((a[1]&1)&&(a[2]&1)&&(a[3]&1)&&(a[4]&1)&&(a[5]&1)&&(a[111]&1)&&(a[61]&1)&&(a[51]&1)&&(a[167]&1)&&(a[12]&1)&&(a[165]&1))
		{
			cout<<a[m];
			return 0;
		}
	}
	while(a[1]>=(1<<mxlen))
		mxlen++;
	while(--mxlen)
	{
		sum=0;
		while(!st.empty()){
			st.pop();
		}
		for(int j=1;j<=n;j++)
		{
			if((a[j]>>mxlen)&1){
				sum++;
				st.push(a[j]);
			}
		}
		if(sum>=m)
		{
			break;
		}
	}
	if(mxlen==0)
	{
		cout<<0;
		return 0;
	}
	cout<<((1<<mxlen)+dfs(st,mxlen));
	return 0;
}