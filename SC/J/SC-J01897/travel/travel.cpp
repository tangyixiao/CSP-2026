#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
#define YUANSHEN ios_base::sync_with_stdio(0);
#define QIDONG cin.tie(0);
#define inf 1e14
#define mod 998244353
#define frein freopen("travel.in","r",stdin);
#define freout freopen("travel.out","w",stdout);
#define pii pair<int,int>
using namespace std;
const int maxn=1e6+10;

string c1,s1,c2,s2;

signed main(){
	YUANSHEN QIDONG
	frein freout
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)cout<<"0000";
	else {
		cout<<1;
		if(s1[0]!=s2[0]||s1[1]!=s2[1])cout<<"000";
		else {
			cout<<1;
			if(s1[2]-'A'<=2&&s2[2]-'A'<=2){
				cout<<1;
				if(abs(s1[2]-'A'-(s2[2]-'A'))==1)cout<<1;
				else cout<<0;
			}else if(s1[2]-'A'>2&&s2[2]-'A'>2)cout<<"11";
			else cout<<"00";
		}
	}
	return 0;
}