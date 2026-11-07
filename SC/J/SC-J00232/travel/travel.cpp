#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0),cout.tie(0);
	ll a,b;
	string c,d;
	cin>>a>>c>>b>>d;
	if(a==b){
		if(c[0]==d[0]&&c[1]==d[1]){
			if(c[2]-'A'<=2&&d[2]-'A'<=2||c[2]-'A'>2&&d[2]-'A'>2){
				if(abs(c[2]-d[2])==1)cout<<"1111";
				else cout<<"1110";
			}else cout<<"1100";
		}else cout<<"1000";
	}else cout<<"0000";
}