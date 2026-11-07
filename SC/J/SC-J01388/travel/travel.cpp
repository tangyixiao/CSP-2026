#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int aa=0,bb=0,cc=0,dd=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		aa=1;
		if(b[0]==d[0]&&b[1]==d[1]){
			bb=1;
			if((b[2]<'D'&&d[2]<'D')||(b[2]>'C'&&d[2]>'C')){
				cc=1;
				if(b[2]>'C'){
					dd=1;
				}else if(!(b[2]!='B'&&d[2]!='B')) {
					dd=1;
				}
			}
		}
	} 
	cout<<aa<<bb<<cc<<dd;
	return 0;
}
