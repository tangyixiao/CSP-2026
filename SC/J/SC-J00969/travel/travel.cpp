#include<bits/stdc++.h>
//#define int long long
using namespace std;

//signed main() {
int main() {
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		if(b[0]==d[0]&&b[1]==d[1]){
			if((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D')){
				if(abs(int(b[2]-d[2]))==1){
					return cout<<"1111",0;
				}
				else cout<<"1110",0;
			}
			else{
				return cout<<"1100",0;
			}
		}
		else{
			return cout<<"1000",0;
		}
	}
	else {
		return cout<<"0000",0;
	}
	return 0;
}