#include <bits/stdc++.h>
using namespace std;
int a,b;
string s1,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s1>>b>>s2;
	if(a==b){
		bool f=1;
		cout<<1;
		int u=0,v=0;
		u+=(s1[0]-'0')*10;
		u+=(s1[1]-'0');
		v+=(s2[0]-'0')*10;
		v+=(s2[1]-'0');
		if(u==v){
			cout<<1;
		}else{
			cout<<0;
			f=0;
		}
		int k1=int(s1[2]);
		int k2=int(s2[2]);
		if(f==1&&(k1<=67&&k2<=67)||(k1>=68&&k2>=68)){
			cout<<1;
		}else{
			cout<<0;
			f=0;
		}
		if(f==1&&abs(k1-k2)==1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
