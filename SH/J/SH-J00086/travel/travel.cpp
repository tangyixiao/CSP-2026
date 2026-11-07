#include<bits/stdc++.h>
#define endl '\n'
typedef long long ll;
typedef double db;
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	bool ok=(c1==c2); cout<<ok;
	string k1=s1.substr(0,2),k2=s2.substr(0,2);
	ok&=(k1==k2); cout<<ok;
	char r1=s1[2],r2=s2[2];
	if(r1>r2) swap(r1,r2);
	ok&=(
		'A'<=r1&&r1<=r2&&r2<='C'||
		'D'<=r1&&r1<=r2&&r2<='F'
	); cout<<ok;
	ok&=(
		r1=='A'&&r2=='B'||
		r1=='B'&&r2=='C'||
		r1=='D'&&r2=='F'
	); cout<<ok;
	return 0;
}
//sto xiaoR&xiaoX orz
