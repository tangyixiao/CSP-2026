#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	bool cnt1=(c1==c2);
	if(cnt1) cout<<1;
	else cout<<0;
	
	bool cnt2=cnt1;
	if(cnt2){
		string p1,p2;
		p1=s1[0]+s1[1];
		p2=s2[0]+s2[1];
		cnt2=(p1==p2);
		if(cnt2) cout<<1;
		else cout<<0;
	}else cout<<0;
	
	bool cnt3=cnt2;
	char x1=s1[2],x2=s2[2];
	if(cnt3){
		cnt3=( x1<='C' && x2<='C' || x1>'C' && x2>'C' );
		if(cnt3) cout<<1;
		else cout<<0;
	}else cout<<0;
	
	
	if(cnt3){
		if(abs(x1-x2)==1) cout<<1;
		else cout<<0;
	}else cout<<0;
	
	return 0;
}
