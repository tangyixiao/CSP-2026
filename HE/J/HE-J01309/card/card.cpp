#include<iostream>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int a,b,c,d,e,f,i,j,k,l,m,n=0;
    int g[50003]={0},g1[50003]={0},g2[50003]={0};
    cin>>a>>b;
    for(i=1;i<=a;i++)
        {
            cin>>g[i];
		}
    for(i=1;i<=a;i++)
    {
    	for(j=i;j<=a;j++)
    	{
    		g1[j]=g[j];
    		for(k=i;k<j;k++)
    		    if(g1[j]==g1[k]){
    		    	for(l=k;l<=j;l++)
    		    	    g1[l]=0;
    		    	k=l;
				}
				g2[g1[j]]++;
		}
		
	}
	for(i=1;i<=b;i++)
	{
		if(g2[i]!=0)cout<<g2[i]<<" ";
	}
    fclose(stdin);
    fclose(stdout);
    return 0;
}
