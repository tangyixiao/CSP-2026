#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1[18],s1[6],c2[18],s2[6];
	int n,e;
	string a,b,c_,d_,A,B,C,D,F;
	cin>>n;
	cin>>A>>B>>C>>D>>F;
	cin>>a>>b>>c_>>d_;
	for(int i=1;i<18;i++)
	{
		c1[18]=c1[i];
		a=c1[i];
		 
		c2[18]=c2[i];
		b=c2[i];
	}
	for(int j=1;j<18;j++)
	{
		s1[6]=s1[j];
	    c_=s1[j];
		
		s2[6]=s2[j];
		d_=s2[j];
	}
	for(int  x=1;x<=n;x++)
	{
		x==n;
	}
	if(a==b)
	{
	cout<<"1";
		if(e==n){
			cout<<"1";
			
			 if(c_==A&&d_==B||c_==A&&d_==C||c_==B&&d_==C||c_==D&&d_==F)
			 {
			 cout<<"1";
			 
			  if(c_==A&&d_==B||c_==B&&d_==C||c_==D&&d_==F)
			{
				cout<<"1";
			}
			  else
			 cout<<"0";
			}
			else
			cout<<"0";
		}
		else
		cout<<"0";
	}
	else
  	cout<<"0";
	return 0;
 } 