#include<bits/stdc++.h>
using namespace std;
long long n,m;
const int N=1e5+10;
long long a[N];
int main()
{
   freopen("and.in","r",stdin);
   freopen("and.out","w",stdout);
  cin>>n>>m;
  int max=INT_MIN;
  for(int i=0;i<n;i++)
  {  
      cin>>a[i];
      if(a[i]^a[i+1]>max)
      {
      	max=a[i]^a[i+1];
       }
  }
  cout<<max;
	return 0;
}
