#include<bits/stdc++.h>
using namespace std;
int n,a[200005],q=0,k,m,d[2];
int main()
{
	freopen("and.in","r",stdin); 
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];	
	}
	while(m>1)
	{
	  q=0;
    for(int i=1;i<=n-1;i++)
	   for(int j=i+1;j<=n;j++){
	   	k=a[i]&a[j];
	    if(q<k){
	       q=k;	
	       d[1]=i;
	       d[2]=j;
	   }
	   }
	
	a[d[1]]=q;
    a[d[2]]=0;
       m--;
	}
	cout<<a[d[1]];
	return 0;
}