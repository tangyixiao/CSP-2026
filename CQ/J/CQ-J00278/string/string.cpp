#include<bits/stdc++.h>
using namespace std;
long long l[300000],r[300000];
char c[300000];
int main()
{
	//*
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//*/
	//*
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//*/
	int n;
	cin>>n;
	long long zc=0,ans=0;
	r[0]=0;
	c[0]='0';
	int nn=1;
	for(int q=1;q<=n;q++)
	{
		int ci;
		cin>>ci>>c[nn];
		if(c[nn]!=c[nn-1])
		{
			l[nn]=r[nn-1]+1;
			r[nn]=l[nn]+ci-1;
			nn++;
		}
		else
		{
			r[nn-1]=r[nn-1]+ci;
		}
		zc+=ci;
	}
	n=nn-1;
	//for(int q=1;q<=n;q++) cout<<l[q]<<' '<<r[q]<<'\n';
	for(int q=1;l[q]<=zc/2;q++)
	{
		long long gr=zc+1-l[q],gl=zc+1-r[q],gz,gy;
		if(r[q]>=gr) break;
		int z=1,y=n;
		while(z<y)
		{
			int mid=(z+y)/2;
			if(r[mid]<gl) z=mid+1;
			else y=mid;
		}
		gz=z;
		z=1,y=n;
		while(z<y)
		{
			int mid=(z+y+1)/2;
			if(l[mid]>gr) y=mid-1;
			else z=mid;
		}
		gy=z;
		//cout<<q<<' '<<gz<<' '<<gy<<'\n';
		if(gz==gy)
		{
			if(c[gz]!=c[q]) ans+=r[q]-l[q]+1;
			continue;
		}
		for(int w=gz+1;w<gy;w++)
		{
			if(c[w]!=c[q]) ans+=r[w]-l[w]+1;
		}
		if(c[gz]!=c[q]) ans+=r[gz]-gl+1;
		if(c[gy]!=c[q]) ans+=gr-l[gy]+1;
	}
	cout<<ans;
	return 0;
}
/*
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
freeopen("string.in","r",stdin);freeopen("string.out","w",stdout);
*/
/*
me want shang mi huo xing wei da shang
awa awa
my hao is *******,i not want say

i love CCF
*/
