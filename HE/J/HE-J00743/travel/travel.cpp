#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c1,c2,s,c;
char s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c>>s1>>c2>>s>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2&&c==s){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2&&c==s&&s1<='C'&&s2<='C'||c1==c2&&c==s&&s1>'C'&&s2>'C'){
		cout<<1;
	}
		else{
		cout<<0;
	}
	if(c1==c2&&c==s&&s1<='C'&&s2<='C'&&s1-s2==1||c1==c2&&c==s&&s1<='C'&&s2<='C'&&s2-s1==1){
		cout<<1;
	}
		else if(c1==c2&&c==s&&s1>'C'&&s2>'C'&&s1-s2==2||c1==c2&&c==s&&s1>'C'&&s2>'C'&&s2-s1==2){
		cout<<1;
	}
		else{
		cout<<0;
	}
	return 0;
}
