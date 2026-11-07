#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],z[300005]={0},u=1;
int main()
{
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	    cin>>a[i];
    while(u<=n)
    {
    	int b[300005]={0};
	    to=1;
	    b[to++]=a[u];
    	for(int j=u+1;j<=n;j++){
    		for(int i=1;i<=to-1;i++) {
    	 	if(b[i]==a[j])
    	 	{
    	 		for(int j=i;j<to;j++)
    	 		    b[j]=0;
    	 		to=i;
			}
			   
		    }
		    b[to++]=a[j];
		}
    	 
		 u++;
		 for(int i=1;i<=to-1;i++){
		 	z[b[i]]++;
		 }
		 
	}
	for(int i=1;i<=m;i++)
	    if(z[i]!=0)
	        cout<<z[i]<<" ";
	return 0;
}