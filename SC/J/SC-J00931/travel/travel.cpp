#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e5+10; 
string c1,s1,c2,s2;
int c11,c22,s11,s22;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		c11*=10;
		c22*=10;
		s11*=10;
		s22*=10;
		c11+=(c1[i]-'0');
		c22+=(c2[i]-'0');
		s11+=(s1[i]-'0');
		s22+=(s2[i]-'0');
	}
	if(c11!=c22){
		cout<<"0000";
		return 0;
	} 
	cout<<"1";
	if(s11!=s22){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	int ls=signed(s1[2]-'A'),lz=signed(s2[2]-'A');
	ls++,lz++;
	if(ls<=3 and lz>=4 or ls>=4 and lz<=3){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(abs(ls-lz)>1){
		cout<<"0";
		return 0;
	}
	cout<<"1"; 
	return 0;
} 