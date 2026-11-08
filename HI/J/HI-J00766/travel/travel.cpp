#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if (a[0]==c[0] && a[1]==c[1]){
		cout<<1;
		if (b[0]==d[0] && b[1]==d[1]){
			cout<<1;
			if ((b[2]<='c' && d[2]<='c')|| (b[2]>'c' && d[2]>'c')){
				cout<<1
				if (abs(b[2]-d[2])==1){
					cout<<1;
				}
				cout<<0;
			}
			cout<<0;
		}
		cout<<0;
	}
	cout<<0;
	return 0;
}
