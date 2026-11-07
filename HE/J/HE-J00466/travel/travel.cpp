#include<bits/stdc++.h>
using namespace std;

void out(bool b){
	if(b){
		cout << 1;
	}else{
		cout << 0;
	}
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int a1,b1,a2,b2;
	char a,b;
	cin >> a1 >> b1 >> a >> a2 >> b2 >> b;

	out(a1==a2);
	out(a1==a2&&b1==b2);
	out((a1==a2&&b1==b2)&&((a<='C'&&b<='C')||(a>='D'&&b>='D')));
	out((a1==a2&&b1==b2)&&((a<='C'&&b<='C')||(a>='D'&&b>='D'))&&((a=='A'&&b=='B')||(a=='B'&&b=='A')||(a=='B'&&b=='C')||(a=='C'&&b=='B')||(a=='D'&&b=='F')||(a=='F'&&b=='D')));
	
	return 0;
}
