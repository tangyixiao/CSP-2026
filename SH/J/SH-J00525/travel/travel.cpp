#include<bits/stdc++.h>
using namespace std;

string s1,s2;
long long c1,c2;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	s1=' '+s1;
	s2=' '+s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	
	if(s1[1]!=s2[1]||s1[2]!=s2[2]){
		cout<<"1000";
		return 0;
	}
	if(s1[3]=='A'||s1[3]=='B'||s1[3]=='C'){
		if(s2[3]=='A'||s2[3]=='B'||s2[3]=='C'){
			if(s1[3]=='B'||s2[3]=='B'){
				cout<<"1111";
				return 0;
			}
			else {
				cout<<"1110";
				return 0;
			}
		}
		else {
			cout<<"1100";	
			return 0;
		}
		
	}
	else if(cout<<"1111");
	return 0;
} 
