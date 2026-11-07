#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;

int n,m,s;
int mxx,mx;
int a[N];
map<int,int>b;

void dfs(int s,int i,int sum)
{
	//cout<<s<<' '<<i<<' '<<sum<<endl;
	if(s==m)	
	{
		mx=max(mx,sum);
		return; 
	}
	if(i==n)	return;
	if(s==0)	dfs(s+1,i+1,a[i]);
	else		dfs(s+1,i+1,sum&a[i]);
	dfs(s,i+1,sum); 
}

int main()
{
	freopen("and.in", "r",stdin);
	freopen("and.out","w",stdout);
	
	b[0]++;
	b[1]++;
	b[3]++;
	b[7]++;
	b[15]++;
	b[31]++;
	b[63]++;
	b[127]++;
	b[255]++;
	b[511]++;
	b[1023]++;
	b[2047]++;
	b[4095]++;
	b[8191]++;
	b[16383]++;
	b[32767]++;
	b[65535]++;
	b[131071]++;
	b[262143]++;
	b[524287]++;
	b[1048575]++;
	
	
	
	
	
	
	
	
	cin>>n>>m;
	
	cin>>a[0];
	s=a[0];
	mxx=a[0];
	
	int l=1;
	if(!b[a[0]])	l=0;
	
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		mxx=max(mxx,a[i]);
		if(!b[a[i]])
		{
			//cout<<a[i];
			l=0;
		}
		s=s&a[i];
	}
	
	if(m==1)
	{
		cout<<mxx;
		return 0;
	}
	if(n==m)
	{
		cout<<s;
		return 0;
	}
	if(l)
	{
		sort(a,a+n);
		cout<<a[n-m];
		return 0;
	}
	
	//  s,i,sum
	dfs(0,0,s);
	
	cout<<mx;
	
	return 0;
} 	