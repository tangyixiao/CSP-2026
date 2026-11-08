#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ans="";
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	ans+='1';
	if(b[0]==d[0]&&b[1]==d[1]){
		ans+='1';
		if(((b[2]<='C'&&b[2]>='A')&&(d[2]<='C'&&d[2]>='A'))||((b[2]<='D'&&b[2]>='E')&&(d[2]<='D'&&d[2]>='E'))){
			ans+='1';
			if(b[2]+1==d[2]||b[2]-1==d[2]){
				ans+='1';
			}else{
				ans+='0';
			}
		}else{
			ans+='0';
			ans+='0';
		}
	}else{
		ans+='0';
		ans+='0';
		ans+='0';
	}
	cout<<ans;
	return 0;
}
