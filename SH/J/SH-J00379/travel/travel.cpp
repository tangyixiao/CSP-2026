#include<bits/stdc++.h>
using namespace std;

string c_1,c_2,s_1,s_2;
int t_1,t_2,t_3,t_4; 

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c_1>>s_1>>c_2>>s_2;
	if(c_1==c_2)
	{
		t_1=1;
		if(s_1[0]==s_2[0]&&s_1[1]==s_2[1])
		{
			t_2=1;
			char ch_1=s_1[2],ch_2=s_2[2];
			if((ch_1=='A'&&ch_2=='B')||(ch_1=='A'&&ch_2=='C')||(ch_1=='B'&&ch_2=='A')||(ch_1=='B'&&ch_2=='C')||(ch_1=='C'&&ch_2=='A')||(ch_1=='C'&&ch_2=='B')||(ch_1=='D'&&ch_2=='F')||(ch_1=='F'&&ch_2=='D'))
			{
				t_3=1;
				if((ch_1=='A'&&ch_2=='B')||(ch_1=='B'&&ch_2=='A')||(ch_1=='B'&&ch_2=='C')||(ch_1=='C'&&ch_2=='B')||(ch_1=='D'&&ch_2=='F')||(ch_1=='F'&&ch_2=='D'))
				{
					t_4=1;
				}
			}
		}
	}
	cout<<t_1<<t_2<<t_3<<t_4<<endl;
	return 0;
 } 
