#include <bits/stdc++.h>
//#define int long long
using namespace std;
const int N=1;
string c1,c2,s1,s2,ans="0000";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<ans;
		return 0;
	}
	ans[0]='1';
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<ans;
		return 0;
	}
	ans[1]='1';
	if((s1[2]<='C'&&s2[2]>'C')||(s1[2]>'C'&&s2[2]<='C')){
		cout<<ans;
		return 0;
	}
	ans[2]='1';
	if(s1[2]<='C'&&abs(s1[2]-s2[2])!=1){
		cout<<ans;
		return 0;
	}
	ans[3]='1';
	cout<<ans;
	return 0;
}