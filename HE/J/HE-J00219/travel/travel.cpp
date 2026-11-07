#include <bits/stdc++.h>
using namespace std;
bool tc(char s)
{
	if(s=='A'||s=='B'||s=='C'){
		return true;
	}
	else{
		return false;
	}
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]!=c2[0]||c1[1]!=c2[1]){
		cout<<"0000";
	}
	else{
		cout<<"1";
		if(s1[0]!=s2[0]||s1[1]!=s2[1]){
			cout<<"000";
		}
		else{
			cout<<"1";
			if((tc(s1[2])&&!tc(s2[2]))||(!tc(s1[2])&&tc(s2[2]))){
				cout<<"00";
			}
			else{
				cout<<"1";
				if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='F'&&s2[2]=='D')){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
		}
	}
	return 0;
} 
