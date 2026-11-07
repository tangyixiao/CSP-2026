#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool flg1=1;
	if(c1==c2){
		cout<<1;
	}else cout<<0,flg1=0;
	bool flg2=1;
	for(int i=0;i<3;i++){
		if(isdigit(s1[i])&&isdigit(s2[i])&&s1[i]!=s2[i]){
			flg2=0;
		}
	}
	if(flg2&&flg1)cout<<1;
	else cout<<0;
	char a=s1[2];
	char b=s2[2];
	bool flg3=1;
	if((a=='A'||a=='B'||a=='C')&&(b=='A'||b=='B'||b=='C')&&flg1&&flg2)cout<<1;
	else if((a=='D'||a=='F')&&(b=='D'||b=='F')&&flg1&&flg2)cout<<1;
	else cout<<0,flg3=0;
	if(flg1&&flg2&&flg3&&((a=='A'&&b=='B')||(a=='B'&&b=='A')||(a=='C'&&b=='B')||(a=='B'&&b=='C')||(a=='F'&&b=='D')||(a=='D'&&b=='F')))cout<<1;
	else cout<<0;
	return 0;
}