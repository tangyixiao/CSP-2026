#include<bits/stdc++.h>
#define int long long
using namespace std;
char c1[5],s1[5],c2[5],s2[5];
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1+1>>s1+1>>c2+1>>s2+1;
	for(int i=1;i<=2;i++){
		if(c1[i]!=c2[i]){
			cout<<"0000";
			return 0;
		}
	}
	for(int i=1;i<=2;i++){
		if(s1[i]!=s2[i]){
			cout<<"1000";
			return 0;
		}
	}
	if(s1[3]<='C'&&s2[3]>'C'||s1[3]>'C'&&s2[3]<='C'){
		cout<<"1100";
		return 0;
	}
	if(s1[3]==s2[3]+1||s1[3]==s2[3]-1){
		cout<<"1111";
		return 0;
	}
	cout<<"1110";
	return 0;
}