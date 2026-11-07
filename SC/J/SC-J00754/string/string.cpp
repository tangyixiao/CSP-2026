#include<bits/stdc++.h>
using namespace std;
struct duan
{
	long long g;
	char t;
};
duan a[200005];
int main()//数组分析 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
    
	cin>>n;
    long long sum=0;
	for(int i=1;i<=n;i++)
	  cin>>a[i].g>>a[i].t;
	int l=1,r=n;
	while(l<=r)
	{
		if(a[l].g==a[r].g)
		{
			if(a[l].t!=a[r].t)
	      	  sum+=a[l].g;
		    l++;
	      	r--;
		}
		else if(a[l].g>a[r].g)
		{
		    if(a[l].t!=a[r].t)
	      	  sum+=a[r].g;
		    a[l].g-=a[r].g;
		    r--;
		}
		else
		{
			if(a[l].t!=a[r].t)
	      	  sum+=a[l].g;
		    a[r].g-=a[l].g;
		    l++;
		}
	}
    cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}