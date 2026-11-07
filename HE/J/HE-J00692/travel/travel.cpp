#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool A,B,C,D;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	if(a==c){
		A=1;
		if(b[0]==d[0]&&b[1]==d[1]){
			B=1;
			if((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D')){
				C=1;
				if(min(b[2],d[2])+1==max(b[2],d[2]))D=1;
			}
		}
	}
	cout << A << B << C << D;
	return 0;
}

