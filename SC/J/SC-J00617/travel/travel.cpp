#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool e,f,g,h;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c){
		e=1;
		if(b[0]==d[0]&&b[1]==d[1]){
			f=1;
			if((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D')){
				g=1;
				if(abs(b[2]-d[2])==1){
					h=1;
				}
			}
		}
	}
	cout<<e<<f<<g<<h;
	return 0;
}