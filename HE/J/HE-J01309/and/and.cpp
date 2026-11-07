#include<iostream>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b,c=-1,d,e,f,i,j,k;
	int g[10005]={0},g1[10005]={0};
	cin>>a>>b;
	for(i=1;i<=a;i++)
	cin>>g[i];
	if(b==1){
		for(i=1;i<=a;i++)
		c=max(g[i],c);
		fclose(stdin);
	fclose(stdout);
	return 0;
	}
	for(k=1;k<=b;k++)
	    for(i=1;i<a;i++)
	        for(j=i+1;j<=a;j++)
	        {
	        	c=max(c,g[i]&g[j]);
		    }
		    cout<<c;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
