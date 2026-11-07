#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
string a1,b1;
string a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		cout<<1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	char s1=a2[2],s2=b2[2];
	if(((a2[0]==b2[0])&&(a2[1]==b2[1]))) {
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if((s1<='C'&&s2<='C')||((s1>'C'&&s2>'C'))){
		cout<<1;
	}
	else{
		cout<<0<<0;
		return 0;
	}
	if(abs(s1-s2)==1){
		cout<<1;
	}
	else cout<<0;
	return 0;
}