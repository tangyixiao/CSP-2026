#include<bits/stdc++.h>
using namespace std;
long long sum,nu,m;
struct p{
	int a;
	char c;
};
p f[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>f[i].a>>f[i].c;
		nu++;
		m+=f[i].a;
	}
	int l=1,r=nu;
	while(l<r)
	{
		if(f[l].c!=f[r].c)
		{
			sum+=min(f[l].a,f[r].a);
			//cout<<l<<' '<<r<<'+'<<sum<<endl;
		}
		if(f[l].a>f[r].a)
		{
			f[l].a-=f[r].a;
			f[r].a=0;				
			r--;
			continue;
		}
		if(f[l].a<f[r].a)
		{
			f[r].a-=f[l].a;
			f[l].a=0;				
			l++;
			continue;
		}
		if(f[l].a==f[r].a)
		{
			f[l].a=0;
			f[r].a=0;
			l++;
			r--;
			continue;
		}
		cout<<l<<' '<<r<<endl;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
