#include<bits/stdc++.h>
#define int long long
using namespace std;
string s,s1,z,z1;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>s>>s1>>z>>z1;
	if(s[0]==z[0]&&s[1]==z[1]){
		cout<<'1';
		if(s1[1]==z1[1]&&s1[0]==z1[0]){
			cout<<'1';
			if(s1[2]<'D'&&z1[2]<'D' || s1[2]>'C'&& z1[2]>'C'){
				cout<<'1';
				if(abs(s1[2]-z1[2])==1 || s1[2]>'C'&&z1[2]>'C'&&abs(s1[2]-z1[2])==2){
					cout<<'1';
				}else cout<<'0'; 
			}else cout<<"00";
		}
		else cout<<"000";
	}else cout<<"0000";
	return 0;
}
