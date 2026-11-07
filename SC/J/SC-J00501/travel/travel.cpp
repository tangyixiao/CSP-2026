#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,z1,z2;
bool p1,p2,p3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	p1=p2=p3=false;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1,p1=true;
	else cout<<0;
	for(int i=0;i<2;i++){
		z1+=s1[i];
		z2+=s2[i];
	}
	if(p1&&z1==z2) cout<<1,p2=true;
	else cout<<0;
	int zz1,zz2;
	if(s1[2]<='C') zz1=1;
	else zz1=2;
	if(s2[2]<='C') zz2=1;
	else zz2=2;
	if(p1&&p2&&zz1==zz2) cout<<1,p3=true;
	else cout<<0;
	if(p1&&p2&&p3&&zz1==2) cout<<1;
	else if(p1&&p2&&p3&&zz1==1){
		if(s1[2]=='A'&&s2[2]=='B') cout<<1;
		else if(s1[2]=='B'&&s2[2]=='A') cout<<1;
		else if(s1[2]=='B'&&s2[2]=='C') cout<<1;
		else if(s1[2]=='C'&&s2[2]=='B') cout<<1;
		else cout<<0;
	}
	else cout<<0;
	return 0;
}