#include <bits/stdc++.h>
#define ll long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in" ,"r" ,stdin);
	freopen("travel.out" ,"w" ,stdout);
	ll a ,b;
	string c ,d;
	cin>>a>>c>>b>>d;
	if(a == b){
		cout<<1;
		ll e ,f;
		e = (c[0]-'0')*10+(c[1]-'0');
		f = (d[0]-'0')*10+(d[1]-'0');
		if(e == f){
			cout<<1;
			if((c[2] >= 'A' && c[2] <= 'C' && d[2] >= 'A' && d[2] <= 'C') || (c[2] >= 'D' && c[2] <= 'E' && d[2] >= 'D' && d[2] <= 'E')){
				cout<<1;
				if(abs(c[2]-d[2]) == 1){
					cout<<1;
				}
				else{
					cout<<0; 
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}