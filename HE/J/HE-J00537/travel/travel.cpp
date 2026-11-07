#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	string s,s1;
	int n,n1;
	cin>>n>>s>>n1>>s1;
	if(n==n1){
		cout<<"1";
		if(s[0]==s1[0]&&s[1]==s1[1]){
			cout<<"1";
			if(s[2]-s1[2]==1){
				cout<<"11";
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
