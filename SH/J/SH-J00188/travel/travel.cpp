#include<bits/stdc++.h>
using namespace std;
char a[1024];
int main()
{
	freopen("travel.in","r",stdin);	
	freopen("travel.out","w",stdout);
	int b,c,d=0,e=0;
	int a1=0,a2=0,a3=0,a4=0;
	gets(a);
	if(a[0]==a[7]&&a[1]==a[8])
		a1=1;
	if(a1==1&&a[3]==a[10]&&a[4]==a[11])
		a2=1;
	if(a2==1)
	{
		if(a[5]>='A'&&a[5]<='C'&&a[12]>='A'&&a[12]<='C')
			a3=1;		
		if(a[5]>='D'&&a[5]<='E'&&a[12]<='E'&&a[12]>='D')
			a3=1;
	}
	d=a[5],e=a[12];
	if(a3==1&&abs(d-e)==1)
	{
		a4=1;
	}
	printf("%d%d%d%d",a1,a2,a3,a4);
	fclose(stdin);
	fclose(stdout);
	return 0;	
	
 } 
