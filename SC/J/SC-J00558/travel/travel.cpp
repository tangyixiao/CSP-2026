#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cc11,cc22;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int c11=10*(c1[0]-'0')+c1[1]-'0';
	int c22=10*(c2[0]-'0')+c2[1]-'0';
	int ss1=10*(s1[0]-'0')+s1[1]-'0';
	if(s1[2]=='F'){
		cc11=s1[2]-'A'-1;
	}else{
		cc11=s1[2]-'A';
	}
	int ss2=10*(s2[0]-'0')+s2[1]-'0';
	if(s2[2]=='F') cc22=s2[2]-'A'-1;
	else cc22=s2[2]-'A';
	if(c11==c22) cout<<1;
	else cout<<0;
	if(c11==c22 && ss1==ss2) cout<<1;
	else cout<<0;
	bool b=0;
	if(cc11==0 || cc11==1 || cc11==2){
		if(cc22==0 || cc22==1 || cc22==2) b=1;
	}else{
		if(cc22==3 || cc22==4) b=1;
	}
	if(c11==c22 && ss1==ss2 && b) cout<<1;
	else cout<<0;
	int mx=max(cc22,cc11);
	int mn=min(cc22,cc11);
	if(c11==c22 && ss1==ss2 && mx-mn==1 && mn!=2) cout<<1;
	else cout<<0;
	return 0;
}
