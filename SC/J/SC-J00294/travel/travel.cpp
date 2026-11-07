#include<bits/stdc++.h>
using namespace std;
bool is_y(string a,string b){
	if(a[0]==b[0]&&a[1]==b[1])return 1;
	return 0;
}
bool is_t(string a,string b){
	if((a[2]>='D'&&b[2]>='D')||(a[2]<='C'&&b[2]<='C'))return 1;
	return 0;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<0<<0<<0<<0;
	}else if(!is_y(s1,s2)){
		cout<<1<<0<<0<<0;
	}else if(!is_t(s1,s2)){
		cout<<1<<1<<0<<0;
	}else if((s1[2]=='A'&&s2[2]=='C')||(s2[2]=='A'&&s1[2]=='C')){
		cout<<1<<1<<1<<0;
	}else {
		cout<<1<<1<<1<<1;
	}
	return 0;
}