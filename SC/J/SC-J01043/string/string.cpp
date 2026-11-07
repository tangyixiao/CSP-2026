#include<bits/stdc++.h>
using namespace std;
long long h=1,l=0;
int a[200005],s[200]={0},n,o=1;
char c[200005],d[9999999];
int main()
{
	freopen("string.in","r",stdin); 
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i]>>c[i];
    	s[c[i]]+=a[i];
    	for(int j=1;j<=a[i];j++,h++)
		   d[h]=c[i]; 
	}		
	for(int i=2;i<=n;i++)
	{
		if(c[i]!=c[i-1])
		    o=0; 
	}
	if(o){
	    cout<<"0";
	    return 0;	
   }
   if(h%2==0)
      h/=2;
   else
     h=(h-1)/2;
     for(int i=1;i<=h;i++)
     {
     	if(d[i]!=d[h+1-i])
     	{
		 
		    l++;
     		if(s[d[i]]>=s[d[h+1-i]]) {
     		s[d[i]]++;
     		
			 }
			 if(s[d[i]]<=s[d[h+1-i]]){
			 	s[d[h+1-i]]++;
			 }
     		   
		 }
	 }
	 cout<<l;
	return 0;
}