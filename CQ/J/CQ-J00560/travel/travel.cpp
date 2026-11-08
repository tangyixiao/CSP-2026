#include<bits/stdc++.h>
using namespace std;
string s1,c1,s2,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		for(int i=0;i<=1;i++){
			if(s1[i]!=s2[i]){
				cout<<"000";
				return 0;
			}
		}
		cout<<"1";
		if(s1[2]=='A'){
			if(s2[2]=='B'){
				cout<<"11";
			}
			else if(s2[2]=='C'){
				cout<<"10";
			}
			else{
				cout<<"00";
			}
		}
		else if(s1[2]=='B'){
			if(s2[2]=='A'){
				cout<<"11";
			}
			else if(s2[2]=='C'){
				cout<<"11";
			}
			else{
				cout<<"00";
			}
		}
		else if(s1[2]=='C'){
			if(s2[2]=='B'){
				cout<<"11";
			}
			else if(s2[2]=='A'){
				cout<<"10";
			}
			else{
				cout<<"00";
			}
		}
		else if(s1[2]=='D'){
			if(s2[2]=='F'){
				cout<<"11";
			}
			else{
				cout<<"00";
			}
		}
		else{
			if(s2[2]=='D'){
				cout<<"11";
			}
			else{
				cout<<"00";
			}
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
