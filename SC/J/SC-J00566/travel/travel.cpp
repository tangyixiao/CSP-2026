#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int n,m;
	cin>>c1>>s1>>c2>>s2;
	n=(s1[0]-'0')*10+(s1[1]-'0');
	m=(s2[0]-'0')*10+(s2[1]-'0');
	if(c1==c2) {
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(n==m) {
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	n=int(s1[2]);
	m=int(s2[2]);
	if(abs(n-m)==1){
		cout<<1;
	}else{
		cout<<0;
		return 0;
	}
	return 0;
} 