#include <bits/stdc++.h>
using namespace std;
string x,y,n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>x>>y>>n>>m;
	if(x==n){
		cout<<"1";
		if(y[0]==m[0] && y[1]==m[1]){
			cout<<"1";
			int l=y[2]-'A',r=m[2]-'A';
			if((l<=2 && r<=2) || (l>=3 && r>=3)){
				cout<<"1";
				if(abs(l-r)==1){
					cout<<"1";
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
