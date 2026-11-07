#include<bits/stdc++.h>
using namespace std;
long long a,b[200005],ans=0;
char c[200005];
int main()
{
	//谷歌小恐龙2811，比我自己电脑上的都多 ：） 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(long long i=1;i<=a;i++)
	{
		cin>>b[i]>>c[i];
		if(c[i]==c[i-1])
		{
			b[i-1]+=b[i];
			a--;
			i--;
		}
	}
	long long d=b[1],e=b[a],f=1,g=a;
	while(f!=g)
	{
		if(c[f]==c[g])
		{
			f++;
			g--;
			d=b[f];
			e=b[g];
			continue;
		}
		ans+=min(d,e);
		if(d>=e)
		{
			d-=e;
		}
		else
		{
			e-=d;
		}
		if(d==0)
		{
			f++;
			d=b[f];
		}
		if(e==0)
		{
			g--;
			e=b[g];
		}
	}
	cout<<(ans+1)/2<<endl;
	return 0;
	//fropen("strig.in","w",stdout)
	//freopen("string.out","r",stdut);
	//ccf
}
