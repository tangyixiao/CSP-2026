#include<bits/stdc++.h>
using namespace std;

int v[20010],n,sum[20010],md,vl[20010],vr[20010],sl,k,r,p;
char c[20010],cl[20010],cr[20010];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>c[i];
		sum[i]=sum[i-1]+v[i];
	}
	md=sum[n]/2;
	for(int i=1;i<=n;i++)
	{
		sl+=v[i];
		if(sl<md)
		{
			vl[i]=v[i];
			cl[i]=c[i];
		}else{
			if(sl==md)
			{
				vl[i]=v[i];
				cl[i]=c[i];
				k=i+1;
				v[k]-=sum[n]%2;
				break;
			}else{
				vl[i]=md-sum[i-1];
				cl[i]=c[i];
				cr[++r]=c[i];
				vr[r]=sum[i]-md-sum[n]%2;
				k=i+1;
				break;
			}
		}
	}
	for(int i=k;i<=n;i++)
	{
		cr[++r]=c[i];
		vr[r]=v[i];
	}
	int i=1,j=0;
	while(i<k)
	{
		if(vl[i]>=vr[r-j])
		{
			vl[i]-=vr[r-j];
			if(cl[i]!=cr[r-j]) p+=vr[r-j];
			if(vl[i]==0) i++;
			j++;
		}else{
			vr[r-j]-=vl[i];
			if(cl[i]!=cr[r-j]) p+=vl[i];
			i++;
		}
		
	}
	cout<<p;
}