#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int nc1=(c1[0]-'0')*10+(c1[1]-'0');
	int ns1=(s1[0]-'0')*10+(s1[1]-'0');
	int nc2=(c2[0]-'0')*10+(c2[1]-'0');
	int ns2=(s2[0]-'0')*10+(s2[1]-'0');
	if(nc1!=nc2){
		cout<<"0000";
		return 0;
	} 
	if(ns1!=ns2){
		cout<<"1000";
		return 0;
	} 
	if(s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D'){
		if(s1[2]<='C'&&s2[2]<='C'){
			if(abs(s1[2]-s2[2])==1){
				cout<<"1111";
			}
			else cout<<"1110";
		}
		else{
			cout<<"1111";
		}
	}
	else cout<<"1100";
	return 0;
} 