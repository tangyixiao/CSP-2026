#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		int x1=(s1[0]-'0')*10+(s1[1]-'0');
		int x2=(s2[0]-'0')*10+(s2[1]-'0');
		if(x1==x2){
			char y1=s1[2];
			char y2=s2[2];
			if(y1>='A'&&y1<='C'&&y2>='A'&&y2<='C'){
				if(y1=='B'||y2=='B'){
					cout<<"1111";
					return 0;
				}
				else{
					cout<<"1110";
					return 0;
				}
			}
			else if(y1>='D'&&y1<='E'&&y2>='D'&&y2<='E'){
				cout<<"1111";
				return 0;
			}
			else{
				cout<<"1100";
				return 0;
			}
		}
		else{
			cout<<"1000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
}
