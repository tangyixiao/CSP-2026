#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1 >>s1 >>c2 >>s2;
	bool f1=0,f2=0,f3=0,f4=0;
	if(c1==c2){
		f1=1;
	}
	if(f1){
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			f2=1;
		}
	}
	if(f1 && f2){
		string t1="",t2="";
		t1=s1[2];
		t2=s2[2];
		if((t1<="C" && t2<="C") || (t1>="D" && t2>="D")){
			f3=1;
		}
	}
	if(f1 && f2 && f3){
		int d=abs((int)s1[2]-(int)s2[2]);
		if(d==1 && (s1[2]!='C' && s2[2]!='D') && (s1[2]!='D' && s2[2]!='C')){
			f4=1;
		}
	}
	if(f1)cout<<1;
	else cout<<0;
	if(f2)cout<<1;
	else cout<<0;
	if(f3)cout<<1;
	else cout<<0;
	if(f4)cout<<1;
	else cout<<0;
	return 0;
}