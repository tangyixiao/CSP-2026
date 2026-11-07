#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string x,n,y,m;
int a,b;
char c,d;
int pd()
{
	if(c=='D'||c=='F')
	  if(d=='D'||d=='F') return 1;
	  else return 0;
	else 
	{
		if(d=='D'||d=='F')
	      if(c=='D'||c=='F') return 1;
	      else return 0;
	}
	return 1;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>n>>y>>m;
	if(x[0]==y[0]&&x[1]==y[1])
	{
		a=(n[0]-'0')*10+(n[1]-'0');
		b=(m[0]-'0')*10+(m[1]-'0');
		c=n[2];
		d=m[2];
		if(a==b)
		{
			if(pd()==1)
			{
				if(abs(c-d)==1) cout<<"1111";
			    else cout<<"1110";
			} 
			else cout<<"1100";
		} 
		else  cout<<"1000";
	}
	else cout<<"0000";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
