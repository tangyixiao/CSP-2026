#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans="";
int f=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1.size()==2){
		if(c2.size()==2){
			if(c1[1]==c2[1]){
				ans=ans+"1";
				f=1;
			}
			else{
				cout<<"0000";
				return 0;
			}
		}
		else{
			cout<<"0000";
			return 0;
		}
	}
	else{
		if(c2.size()==2){
			cout<<"0000";
			return 0;
		}
		else{
			if(c2[2]==c1[2]){
				ans=ans+"1";
				f=1;
			}
			else{
				cout<<"0000";
				return 0;
			}
		}
	}
	if(f){
		if(s2[0]!=s1[0]){
			cout<<"1000";
			return 0;
		}
		else{
			if(s1[1]==s2[1]){
				ans=ans+"1";
				if((s1[2]=='A' || s1[2]=='B' || s1[2]=='C') && (s2[2]=='A' || s2[2]=='B' || s2[2]=='C')){
					ans=ans+"1";
					int x=int(s1[2])-int(s2[2]);
					if(abs(x)==1){
						ans=ans+"1";
						cout<<"1111";
						return 0;
					}
					else{
						cout<<"1110";
						return 0;
					}
				}
				else if((s1[2]=='F' || s1[2]=='D') && (s2[2]=='F' || s2[2]=='D')){
					cout<<"1111";
					return 0;
				}
				else if((s1[2]=='C'||s1[2]=='D') && (s2[2]=='C'||s2[2]=='D')){
					cout<<"1100";
					return 0;
				}
			}
			else{
				cout<<"1000";
				return 0;
			}
		}
	}
	cout<<ans;
	return 0;
}