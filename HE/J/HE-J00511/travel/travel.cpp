#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a[30],b[30];
	bool g;
	for(int i=1;i<=2;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=2;i++){
		cin>>b[i];
	} 
	if(a[1]==b[1])
	{
		
		cout<<"1";
		if(a[2][1]==b[2][1]&&a[2][0]==b[2][0])
		{
			cout<<"1";
			if((a[2][2]<='C'&&a[2][2]>='A'&&b[2][2]<='C'&&b[2][2]>='A')||(a[2][2]=='D'&&a[2][2]=='E'&&b[2][2]=='D'&&b[2][2]=='E'))
			{
			        cout<<"1";
					if((int)b[2][2]-(int)a[2][2]==1||(int)a[2][2]-(int)b[2][2]==1)
					{
						cout<<"1";
					}
					else
					cout<<0;
					
			}
			
			else
				{
					cout<<"00";
					return 0;
				}
		}
		else
				{
					cout<<"000";
					return 0;
				}
	}
	else
				{
					cout<<"0000";
					return 0;
				}
				return 0;
} 
