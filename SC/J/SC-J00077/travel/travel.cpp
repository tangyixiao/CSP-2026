#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool flag;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else {
		flag=1;
		cout<<0;
	}
	int a1,a2;
	a1=s1[1];
	a2=s2[1];
	if(s1[0]==1) a1+=10;
	if(s2[0]==1) a2+=10;
	if(a1==a2&&!flag) cout<<1;
	else{
		flag=1;
		cout<<0;
	}
	if(flag||(s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C')){
			cout<<0;
			flag=1;
	}
	else cout<<1;
	if(flag||(s1[2]=='C'&&s2[2]=='A')||(s1[2]=='A'&&s2[2]=='C')) cout<<0;
	else cout<<1;
	return 0;
}