#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	bool flag1=0;
	if(c1==c2){
		cout<<1;
		flag1=1;
	}else {
		cout<<0;
	}if(flag1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
	}else cout<<0;
	int flag=0;
	if(flag1&&s1[0]==s2[0]&&s1[1]==s2[1]&&(s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')){
		cout<<1;
		flag=1;
	}else cout<<0;
	if(flag==1&&abs(s1[2]-s2[2])==1){
		cout<<1;
	}else cout<<0;
	return 0;
}