#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
//const int N = 
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)cout<<"0000";
	else{
		int a1=(s1[0]-'0')*10+(s1[1]-'0');
		int a2=(s2[0]-'0')*10+(s2[1]-'0');
		if(a1!=a2)cout<<"1000";
		else{
			if(s1[2]-'A'<3&&s2[2]-'A'>=3)cout<<"1100";
			else{
				if(abs(s1[2]-s2[2])>1)cout<<"1110";
				else cout<<"1111";
			}
		}
	}
	return 0;
} 