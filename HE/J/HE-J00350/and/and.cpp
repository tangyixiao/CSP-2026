#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+91;
inline bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    long long n,m;
    long long a[N];
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    cin>>a[i];
    int aa[N]={0};
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		if(a[i]==a[j])
    		{
    			aa[i]++;
			}
		}
	}
	sort(aa+1,aa+1+n,cmp);
	if(aa[1]!=0)
	cout<<aa[1]<<'\n';
	else
	{
		sort(a+1,a+1+n,cmp);
		cout<<a[1]<<'\n';
	}
	return 0;
}
