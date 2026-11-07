#include<bits/stdc++.h>

using namespace std;

string c1,s1,c2,s2;

bool check(string a,string b){
	if(a[2]=='D')return (b[2]=='F');
	if(a[2]=='F')return (b[2]=='D');
	if(a[2]=='A' || a[2]=='B' || a[2]=='C')return(b[2]=='A' || b[2]=='B' || b[2]=='C');
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0] && c1[1]==c2[1]){
		cout<<"1";
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			cout<<"1";
			if(check(s1,s2)){
				cout<<"1";
				if(abs(s1[2]-s2[2])==1)cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else{
		cout<<"0000";
	}
	
	
	
	return 0;
}