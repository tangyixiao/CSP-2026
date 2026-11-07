#include<bits/stdc++.h>
#define ll long long
#define up(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define dn(i,a,b,c) for(ll i=a;i>=b;i-=c)

using namespace std;
string a,b,c,d;
string ans="1";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000"<<endl;
		return 0;
	}
	ll num1=(b[0]-'0')*10+(b[1]-'0'),num2=(d[0]-'0')*10+(d[1]-'0');
	char w1=b[2],w2=d[2];
	if(num1==num2)ans+='1';else ans+='0';
	if(num1==num2&&((w1>='D'&&w2>='D')||(w1<='C'&&w2<='C')))ans+='1';else ans+='0';
	if(num1==num2){
		if(((w1>='D'&&w2>='D')||(w1<='C'&&w2<='C')))if(abs(w1-w2)==1)ans+='1';else ans+='0';
		else ans+='0';
	}
	else ans+='0';
	cout<<ans<<endl;
	return 0;
}
