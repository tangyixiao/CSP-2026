#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
	{
		cout<<"0000";
	}
	else{
		cout<<1;
		if(s1[0]!=s2[0]||s1[1]!=s2[1])
		{
			cout<<"000";
		}
		else{
			cout<<1;
			int x=s1[2]-'A',y=s2[2]-'A';
			if(x>y) swap(x,y);
			if(x<3&&y>=3)
			{
				cout<<"00";
			}
			else{
				cout<<1;
				if(x==3&&y==5)
				{
					cout<<1;
				}
				else if(y-x!=1)
				{
					cout<<0;
				}
				else{
					cout<<1;
				}
			}
		}
	}
	return 0;
}

