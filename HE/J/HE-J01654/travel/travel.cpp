#include<bits/stdc++.h>
using namespace std;
struct e{
	int c,s;
	char p;
};
//(a.p == 'A' || a.p == 'B' || a.p == 'C') && (b.p == 'A' || b.p == 'B' || b.p == 'C')
//(a.p == 'D' || a.p == 'F') && (b.p == 'D' || b.p == 'F')
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	e a,b;
	cin >> a.c >> a.s >> a.p;
	cin >> b.c >> b.s >> b.p;
	if(a.c==b.c) cout << 1;
	else{
		cout << 0 << 0 << 0 << 0 ;
		return 0;
	} 
	if(a.s==b.s) cout << 1;
	else{
		cout << 0 << 0 << 0;
		return 0;
	}
	 
	if((a.p == 'A' || a.p == 'B' || a.p == 'C') && (b.p == 'A' || b.p == 'B' || b.p == 'C')){
		cout << 1;
		if(abs(a.p-b.p)==1) cout << 1;
		else cout << 0;
	}
	else if((a.p == 'D' || a.p == 'F') && (b.p == 'D' || b.p == 'F')){
		cout << 1;
		if(abs(a.p-b.p)==1) cout << 1;
		else cout << 0;
	}
	else {
		cout  << 0 << 0;
	}
	return 0;
} 
