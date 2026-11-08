#include<bits/stdc++.h>
using namespace std;
map<char,int>a={{'A',0},{'B',0},{'C',0},{'D',1},{'E',1}};
map<char,int>b={{'A',1},{'B',2},{'C',3},{'D',5},{'E',6}};
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string ww1,ww2;
	int w1,w2;
	cin>>c1>>ww1>>c2>>ww2;
	w1=int(ww1[0]-'0')*10+int(ww1[1]-'0');
	w2=int(ww2[0]-'0')*10+int(ww2[1]-'0');
	if(c1==c2)
	{
		if(w1==w2)
		{
			if(a[ww1[2]]==a[ww2[2]])
			{
				if(abs(b[ww1[2]]-b[ww2[2]])==1)
				{
					cout<<"1111";
				}
				else
				{
					cout<<"1110";
				}
			} 
			else
			{
				cout<<"1100";
			}
		}
		else
		{
			cout<<"1000";
		}
	}
	else
	{
		cout<<"0000";
	}
} 
