#include<bits/stdc++.h>
using namespace std;
long long n,m;
const int N=1e5+10;
long long a[N],b[N];
int main()
{
   freopen("card.in","r",stdin);
   freopen("card.out","w",stdout);
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {  
      cin>>a[i];
      for(int j=1;j<=m;j++)
      {
      	if(a[i]==a[j])
      	{
      	   b[i]=a[i];
		}
		else
		{
			b[n+1]=a[i];
		}
	  }
  }
  for(int i=1;i<=m;i++)
  {
  	cout<<b[i]<<"  ";
  }
	return 0;
}
