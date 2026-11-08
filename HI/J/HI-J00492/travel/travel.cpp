#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int m,n;
	string a,b;
	cin>>m>>a>>n>>b;
	if(m==n) {
		cout<<"1";
		if(a[0]==b[0]&&a[1]==b[1]){
		cout<<"1";
		if(a[2]<='C'&&a[2]>='A'&&b[2]<='C'&&b[2]>='A') 
		{
			cout<<"1";
			if(a[0]==b[0])
			{
				if(a[2]+1==b[2]||a[2]-1==b[2]) cout<<"1";
				else cout<<"0";
			}
			else cout<<"0";
		}
		else cout<<"00";
		}
		else cout<<"000";
		
	}
	else 
	{
		cout<<"0000";
	}
	
	return 0;
 } 
