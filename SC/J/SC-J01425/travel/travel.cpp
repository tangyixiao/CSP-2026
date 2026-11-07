#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
bool l(string a,string b){
	for(int i=0;i<3;i++){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(!l(c1,c2)){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<"1";
		if(s1[1]!=s2[1]){
			cout<<"000";
			return 0;
		}
		else{
			cout<<"1";
			if('A'<=s1[2]&&s1[2]<='C'){
				if('A'<=s2[2]&&s2[2]<='C'){
					cout<<"1";
					if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')){
						cout<<"1";
						return 0;
					}
					else{
						cout<<"0";
						return 0;
					} 
				}
				cout<<"00";
				return 0;
			}
			else if('D'<=s1[2]&&s1[2]<='F'){
				if('D'<=s2[2]&&s2[2]<='D'){
					cout<<"11";
					return 0;
				}
				cout<<"00";
				return 0;
			}
			else {
				cout<<"00";
				return 0;
			}
		}
	}
	return 0;
}