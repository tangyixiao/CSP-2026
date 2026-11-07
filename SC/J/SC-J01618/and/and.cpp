#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main(){
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort (a+1,a+n+1);
	int max_and_now=-0x3f3f3f3f,max_and_before,used_num1,used_num2;
	bool flag=false;
	for (int i=1;i<m;i++)
	{
		max_and_now=-0x3f3f3f3f;
		flag=false;
		for (int j=n;j>=1;j--)
		{
			if (i==1)
			{
				for (int k=j-1;k>=1;k--)
				{
					if (a[k]<=max_and_now)
				    {
				    	flag=true;
				    	break;
					}
					if (max_and_now<(a[j]&a[k]))
					{
						max_and_now=a[j]&a[k];
						used_num1=j;
						used_num2=k;
					}
				}
			}
			else
			{
				if (a[j]!=0)
				{
					if (a[j]<=max_and_now)
					{
					    flag=true;
					    break;
					}
					if (max_and_now<(max_and_before&a[j]))
					{
						max_and_now=(max_and_before&a[j]);
						used_num1=j;
					}
				}
			   else
			   {
			      continue;
			   }
			}
		}
		if (i==1)
		{
		    a[used_num1]=0;
		    a[used_num2]=0;
		}
		else
		{
		    a[used_num1]=0;
		}
		max_and_before=max_and_now;
	} 
	cout<<max_and_before;
	return 0;
} 