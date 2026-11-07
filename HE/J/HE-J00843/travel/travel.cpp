#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	string op="";
	bool f=0;
	cin>>c1>>c2>>c3>>c4;
	char a1=c2[2];
	char a2=c4[2];
	int p=abs(int(a1-a2));
	if (c1==c3)
	{
		op+="1";
		if (c2[1]==c4[1])
		{
			op+="1";
			if ((c2[2]<='C'&&c4[2]<='C')||(c2[2]>='D'&&c4[2]>='D'))
			{
				op+="1";
				if (p==1)
					op+="1";
				else{
					cout<<"1110";
					f=1;
				}
			}
			else{
				cout<<"1100"; 
				f=1;
			}
		}
		else{
			cout<<"1000";
			f=1;
		}
	}
	else
		cout<<"0000";
	if (!f)
		cout<<op;
	return 0;
}
