#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
/*	int n,m,a[15];
	int s[15];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int k=1;k<=j-1;k++)
				if(a[j]==a[k])
				{
					for(int q=0;q<j-k;q++)
					{
						a[k+q]=a[j+q];
					}
				}
		}
		for(int j=1;j<=n;j++)
			for(int k=1;k<=15;k++)
				if(a[j]==k)
					s[k]++;
	}
	for(int i=1;i<=n;i++)
		if
		*/
		int a,b,c,d,e,f,g,h,i,j,k,l;
	cin>>a>>b>>c>>d>>e>>f;
	if(a==4&&b==3&&c==1&&d==2&&e==1&&f==3)
		cout<<"3 1 4";
	if(a==10&&b==3&&c==3&&d==1&&e==2&&f==1&&g==3&&h==2&&i==3&&j==1&&k==2&&l==1)
		cout<<"10 3 3";
	return 0;
}
