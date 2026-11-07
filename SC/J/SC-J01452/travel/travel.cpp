#include<bits/stdc++.h>
using namespace std;
struct node{
	string n,m;
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.in","w",stdout);
	node s1,s2;
	cin>>s1.n>>s1.m>>s2.n>>s2.m;
	if(s1.n==s2.n){
		cout<<"1";
		if(s1.m[0]==s2.m[0]&&s1.m[1]==s2.m[1]){
			cout<<"1";
		//	cout<<s1.m[2]<<" "<<s2.m[2];
			if(s1.m[2]=='A'&&s2.m[2]=='C'||s1.m[2]=='C'&&s2.m[2]=='A'){
				cout<<"10";
			}
			else if(s1.m[2]=='C'&&s2.m[2]=='D'||s1.m[2]=='D'&&s2.m[2]=='C') {
				//cout<<"!!!!!!!!!";
				cout<<"00";
			}else if(s1.m[2]-s2.m[2]==1||s2.m[2]-s1.m[2]==1){
				cout<<"11";
			}
		}else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 