#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int flag=1;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i])flag=0;
	}
	if(flag==1){
		cout<<"1";
		for(int i=0;i<2;i++){
			if(s1[i]!=s2[i]){
				flag=0;
			}
		} 
		if(flag==0){
			cout<<"000";
			return 0;
		}
		cout<<"1";
		if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
			if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
				cout<<"1";
				if(s1[2]=='B'||s2[2]=='B'){
					cout<<"1";
					return 0;
				}
				else{
					cout<<"0";
					return 0;
				}
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			if(s2[2]=='D'||s2[2]=='F'){
				cout<<"11";
				return 0;
			}
			else{
				cout<<"00";
				return 0;
			}
		}
	}
	else cout<<"0000";
	return 0;
} 