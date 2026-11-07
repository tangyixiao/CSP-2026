#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
char cou[4]={'0','0','0','0'};
int main(){
	freopen("traval.in","r",stdin);
	freopen("traval.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c){
		cou[0]='1';
		if(b[0]==d[0]&&b[1]==d[1]){
			cou[1]='1';
			if(b[2]<='C'&&d[2]<='C'||b[2]>'C'&&d[2]>'C'){
				cou[2]='1';
				if(abs(b[2]-d[2])==1){
					cou[3]='1';
				}
			}
		}
	}
	cout<<cou;
	return 0;
} 