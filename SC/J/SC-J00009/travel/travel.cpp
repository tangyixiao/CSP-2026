#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000\n";
		return 0;
	}
	cout<<1;
	if(s1[0]==s2[0] && s2[1]==s1[1])cout<<1;
	else {
		cout<<"000\n";
		return 0;
	}
	if(s1[2]<='C'){
		if(s2[2]<='C'){
			cout<<'1';
			if(abs(s2[2]-s1[2])==1)cout<<"1\n";
			else cout<<"0\n";
		}
		else cout<<"00\n";
	}else{
		if(s2[2]>'C')cout<<"11\n";
		else cout<<"00\n"; 
	}
	return 0;
} 