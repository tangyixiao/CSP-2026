#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long a[200000]={};
	char b[200000]={};
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int an=n;
	bool sim;
	while(true)
	{
		sim=1;
		for(int i=0;i<an-1;i++){	
			if(b[i]==b[i+1])
			{
				a[i]+=a[i+1];
				for(int j=i+1;j<n-1;j++)
				{
				    a[j]=a[j+1];
				    b[j]=b[j+1];
				}
				an--;
				sim=0;
		    }
		}
		if(sim) break;
	}
	int x=0;
	if(an==1)
	{
		cout<<0;
	}
	else if(an==2) 
	{
	    cout<<min(a[0],a[1]);
	}
	else{
		long long o=0;
		int pt;
		for(int i=0;i<an;i++) o+=a[i];
		long long l=0;
		for(int i=0;i<an-1;i++)
		{
			l+=a[i];
			if(l<=o/2&&l+a[i+1]>=o/2)
			{
				pt=i;
				break;
			}
		}
		int sig=min(o/2-l,(l+a[pt+1])-o/2);
		vector<char> le(o/2),ri(o/2);
		int lef=0,rig=an-1,lei=0,chong=o;
		for(int i=0;i<o/2-sig;i++)
		{
			if(i>=a[lef]+lei){lef++; lei+=i;}
			le[i]=b[lef];
			if(chong-a[rig]>o-i-1) rig--; chong-=i;
			ri[i]=b[rig];
		}for(int i=0;i<o/2-sig;i++)
		{
			x+=(le[i]!=ri[i]); 
		}
		cout<<x;
	}
	
	
}
