#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long n,a[N],sum,len;
char c[N];
stack<pair<long long,char>>st;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	long long t=0;
	if(len%2)
	{
		for(long long i=1;i<=n;i++)
		{
			if(t+a[i]>=len/2+1)
			{
				a[i]--;
//				cout<<"ts";
				break;
			}
			t+=a[i];
		}
	}
//	for(int i=1;i<=n;i++)cout<<a[i]<<c[i]<<'\n';
	len-=len%2;
	t=0;
	for(long long i=1;i<=n;i++)
	{
		long long o=t;
		t+=a[i],t=min(t,len/2),a[i]-=t-o;
//		cout<<t<<' '<<o<<'\n';
		if(t-o)st.push({t-o,c[i]});
		while(a[i])
		{
//			cout<<a[i]<<' ';
			long long p=a[i];
			if(c[i]!=st.top().second)sum+=min(a[i],st.top().first);
			a[i]-=min(a[i],st.top().first);
			st.top().first-=min(p,st.top().first);
			if(st.top().first==0)st.pop();
		}
	}
	cout<<sum;
	return 0;
}
/*

3
2 a
2 b
1 c
   
*/