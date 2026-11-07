#include<bits/stdc++.h>
using namespace std;
struct zuowei {
	string cx;
	string zw;
};
zuowei r, x;
bool pan(char a,char b){
	if(a>='A'&&a<='C'&&b>='A'&&b<='C')return 1;
	if(a>='D'&&a<='E'&&b>='D'&&b<='E')return 1;
	return 0;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> r.cx >> r.zw >> x.cx >> x.zw;
	char lr=r.zw[2],lx=x.zw[2];
	if (r.cx == x.cx) {
		cout << 1;
		if(r.zw[0]==x.zw[0]&&r.zw[1]==x.zw[1]){
			cout<<1;
			if(pan(lr,lx)==1){
				cout<<1;
				if(lr+1==lx||lr==lx+1)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		} 
		else cout<<"000";
	} else cout <<"0000";
	return 0;
}