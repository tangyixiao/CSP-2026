#include <iostream>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if((c1=="01"||c1=="16")||(c2=="01"||c2=="16")){
		cout<<"0000";
		return 0;
	}
	if(c1==c2)
	{
		if((s1[0]==s2[0])&&(s1[1]==s2[1]))
		{
			if((s1[2]=='D' && s2[2]=='E')||(s1[2]=='E' && s2[2]=='D')){
				cout<<"1111";
			}
			else if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))
			{
				if((s1[2]=='A'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='C'))
				{
					cout<<"1110";
				}
				else
				{
					cout<<"1111";
				}
			}
			else{
				cout<<"1100";
			}
		}
		else{
			cout<<"1000";
		}
	}
	else{
		
		cout<<"0000";
	}
	return 0;
}
