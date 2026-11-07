#include<bits/stdc++.h>
using namespace std;
int n,x[200005],l1,l2,r1,r2;
long long s;
char a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	l1=1;
	r1=n;
	for(int i=1;i<=n;i++)cin>>x[i]>>a[i];
	r2=x[n];
	while(l1<r1)
	{
		if(a[l1]!=a[r1])
		{
			if((x[l1]-l2)<r2)
			{
				s+=x[l1]-l2;
				r2-=x[l1]-l2;
				l1++;
				l2=0;
			}
			else if((x[l1]-l2)==r2)
			{
				s+=r2;
				r1--;
				r2=x[r1];
				l1++;
				l2=0;
			}
			else if((x[l1]-l2)>r2)
			{
				s+=r2;
				l2+=r2;
				r1--;
				r2=x[r1];	
			}
		}
		else
		{
			if((x[l1]-l2)<r2)
			{
				
				r2-=x[l1]-l2;
				l1++;
				l2=0;
			}
			 else if((x[l1]-l2)==r2)
			{
				
				r1--;
				r2=x[r1];
				l1++;
				l2=0;
			}
			else if((x[l1]-l2)>r2)
			{
				
				l2+=r2;
				r1--;
				r2=x[r1];	
			}
		}
		
	}
	cout<<s;
}
