#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen(string.in,"r",stdin);
	freopen(string.out,"w",stdout);
	string a,c,s;
	long long n,v=0;
	cin>>n;
	sizeof(s,0,freopen);
	for(int i=0;i<n;i++)
	{
	  cin>>a[i]>>c[i];
	  for(int j=0;j<a[i];j++)
	    s[i*2+1]=c[i*2+1];
    }
	for(int i=0;i<s.size()-1;i++)
      if(s[i]==s[i+1])
      {
      	cout<<0;
      	return 0;
      	fclose(stdin);fclose(stdout);
	  }
    long long l=s[0],r=s[s.size()-1];
    for(int i=0;i<s.size()/2;i++) 
    {
    	if(l==r)
    	{
    		l=s[i+1];r=s[s.size()-1-(i+1)];
		}
		else
		{
			r=l;
			l=s[i+1];r=s[s.size()-1-(i+1)];
			v++;
		}
	}
	cout<<v;
	return 0;
	fclose(stdin);fclose(stdout);
}
