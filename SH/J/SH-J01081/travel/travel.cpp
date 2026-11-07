#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	int a=(int(s1[0]-'0'))*10+int(s1[1]-'0');
	int b=(int(s2[0]-'0'))*10+int(s2[1]-'0');
	if(a!=b){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	char x=s1[2];
	char y=s2[2];
	if((x<='C'&&y>='D')||(x>='D'&&y<='C')){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(x<='c'){
		if(abs(x-y)==1) cout<<"1";
		else cout<<"0";
	}
	else cout<<"1";
	return 0;
}
