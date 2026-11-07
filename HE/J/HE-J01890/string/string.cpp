#include<bits/stdc++.h>
using namespace std;
long long n,len,g=0;
long long a[200001];
string c;
char b[200001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		len+=a[i];
	}
	long long ag=0,bg=0,aa=0,bb=n+1;
	char achar,bchar;
	while(1)
	{
		if(ag==0) aa++,achar=b[aa],ag=a[aa];
		if(bg==0) bb--,bchar=b[bb],bg=a[bb];
		if(aa>=bb) break;
		if(achar!=bchar)
	    {
	    	g+=min(ag,bg);
		}
		if(ag>=bg)
		{
			ag-=bg;
			bg=0;
		}
		else bg-=ag,ag=0;
	}
	cout<<g;
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
