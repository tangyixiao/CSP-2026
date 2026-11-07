#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char xl,rl;
	long long xc,xs,rc,rs;cin>>rc>>rs>>rl>>xc>>xs>>xl;
	bool a=(rc==xc),b=a&&(rs==xs),c,d;
	if(rl>='A'&&rl<='C'){
		if(xl>='A'&&xl<='C'){
			c=b&&1;
		}
		else{
			c=0;
		}
		if(abs(xl-rl)==1){
			d=c&&1;
		}
		else d=0;
	}
	else{
		if(xl=='D'||xl=='F'){
			c=b&&1;
		}
		else{
			c=0;
		}
		d=1;
	}
	cout<<a<<b<<c<<d;
	return 0;
}
