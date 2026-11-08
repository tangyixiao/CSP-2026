#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2; 
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	if(s2[0]!=s1[0]||s2[1]!=s1[1]){
		cout<<"1000";
		return 0;
	}
	if((s2[2]<='C'&&s1[2]>='D')||(s1[2]<='C'&&s2[2]>='D')){
		cout<<"1100";
		return 0;
	}
	if(abs((int)(s2[2]-s1[2]))!=1){
		cout<<"1110";
	}
	else{
		cout<<"1111";
	}
	return 0;
}

