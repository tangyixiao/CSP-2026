#include<bits/stdc++.h>
#define int long long
#define cin std::cin
#define cout std::cout
#define endl '\n'
using namespace std;
const int maxn=1e5+5;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else{cout<<"0000"; return 0;}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<"1";
	else{cout<<"000"; return 0;}
	char ch1=s1[2],ch2=s2[2];
	if(ch1>ch2) swap(ch1,ch2);
	if((ch1<='C'&&ch2<='C')||(ch1>='D'&&ch2>='D')) cout<<"1";
	else{cout<<"00"; return 0;}
	if(long(ch1)==long(ch2)-1) cout<<"1";
	else cout<<"0";
	return 0;
}
