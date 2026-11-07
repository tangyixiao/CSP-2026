#include<bits/stdc++.h>

using namespace std;
const int N=1e6+10;
int a,b;
string c,d;
int mp[N];
void sol(){
	mp[(int)'F']=mp[(int)'D']=1;
	cin>>a>>c>>b>>d;
	int k1=(c[0]-'0')*10+c[1]-'0';
	int k2=(d[0]-'0')*10+d[1]-'0';
	if(a==b) cout<<1;
	else cout<<0;
	if(a==b&&k1==k2) cout<<1;
	else cout<<0;
	char w1=c[2],w2=d[2];
	if(a==b&&k1==k2&&mp[(int)w1]==mp[(int)w2]) cout<<1;
	else cout<<0;
	bool f1=(w1<='C')&&(w2<='C')&&(abs(w1-w2)==1);
	bool f2=(w1>'C')&&(w2>'C');
	if(a==b&&k1==k2&&mp[(int)w1]==mp[(int)w2]&&(f1||f2)) cout<<1;
	else cout<<0;
	return ;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int t=1;
	while(t--) sol();
	return 0;
}
//PDF pack down in 8:33:??
//solve in 8:40:56
