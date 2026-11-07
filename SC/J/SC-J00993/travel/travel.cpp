#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ns1,ns2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	ns1=int(s1[2]);
	ns2=int(s2[2]);
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if((ns1<=67&&ns2<=67)||ns1>67&&ns1<=69&&ns2>67&&ns2<=69){
				if(ns1+1==ns2||ns1-1==ns2){
					cout<<"1111";
				}else
					cout<<"1110";
			}else
				cout<<"1100";
		}else
			cout<<"1000";
	}else
		cout<<"0000";
	return 0;
}