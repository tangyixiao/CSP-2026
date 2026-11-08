#include<bits/stdc++.h>
using namespace std;
string car1,car2,seat1,seat2;
char seat[6][2]={{'A','B'},{'B','A'},{'B','C'},{'C','B'},{'D','F'},{'F','D'}};

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>car1>>seat1>>car2>>seat2;
	if(car1==car2)
	{
		cout<<'1';
		if(seat1[0]==seat2[0] && seat1[1]==seat2[1])
		{
			cout<<'1';
			if((seat1[2]<='C' && seat2[2]<='C') || (seat1[2]>='D' && seat2[2]>='D'))
			{
				cout<<'1';
				bool l=false;
				for(int i=0;i<6;i++)
				{
					if(seat[i][0]==seat1[2] && seat[i][1]==seat2[2]) l=true;
				}
				if(l) cout<<'1';
				else cout<<'0';
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
