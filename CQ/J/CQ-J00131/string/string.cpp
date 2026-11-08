#include<bits/stdc++.h>
using namespace std;
int  a[100000];
string b[10000];
string c[10000];
string d[10000];
int main()
{
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
     int n;
     int u=0;
     scanf("%d",&n);
     int f=0;
     int h=0;
     bool p=true;
     for (int i=0;i<n;i++)
     {
     	cin>>a[i]>>b[i];
     	u=a[i];
     	f++;
     	for (int j=0;j<u;j++)
  {
	 if (j<u){
	 	c[i]+=b[i];
	  
	 }
  }
	  }
	  int l=0;
	 	 for (int i=0;i<f;i++)
	 	 {
	 	 	d[l++]+=c[i];
	 	 	h++;
		  }
		  for (int i=0;i<h;i++)
		  {
		  	for (int j=h;j>0;j--)
		  	{
		  		if(d[i]==d[j]){
		  		     break;	
		  		     p=false;
				  }
				  else {
				  	p=true;
				  }
			  }
		  }
		  if (p==false){
		  	cout<<"0";
		  }
		  return 0;
}
