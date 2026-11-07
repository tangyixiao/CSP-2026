#include<bits/stdc++.h>
using namespace std;

const int maxn=2e5+10;

long long a[maxn],n;
char c[maxn];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	
	long long lt=0,rt=0,cnt=0;
	char lz,rz;
	
	int l=1,r=n;
	while(l<=r)
	{
		//取出 
		if(lt==0) lt=a[l],lz=c[l],l++;
		if(rt==0) rt=a[r],rz=c[r],r--;
		//匹配+操作 
		if(lz==rz)
		{
			long long tmp=min(lt,rt);
			lt-=tmp;
			rt-=tmp;
		}
		else
		{
			long long tmp=min(lt,rt);
			cnt+=tmp;
			lt-=tmp;
			rt-=tmp;
		}
	}
	cout<<cnt;
	
	return 0;
}