#include<bits/stdc++.h>
using namespace std;
namespace MoonHalfx{
	#define int long long 
	signed main(){
		string s1,s2,s3,s4;
		cin>>s1>>s2>>s3>>s4;
		if(s1!=s3)cout<<"0000\n";
		else if(s2[0]!=s4[0] || s2[1]!=s4[1])cout<<"1000\n";
		else if(max(s2[2],s4[2])>'C' && min(s2[2],s4[2])<='C')cout<<"1100\n";
		else if((s2[2]=='A' && s4[2]=='C') || (s2[2]=='C' && s4[2]=='A'))cout<<"1110\n";
		else cout<<"1111\n";
		return 0;
	}
	#undef int
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	MoonHalfx::main();
	return 0;
}
