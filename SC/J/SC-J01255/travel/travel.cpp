#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string cr, sr, cx, sx;
	cin >> cr >> sr >> cx >> sx;
	if(cr==cx){
		cout << "1";
		if(sr[0]==sx[0]&&sr[1]==sx[1]){
			cout << "1";
			int r=sr[2]-'A'+1;
			int x=sx[2]-'A'+1;
			if(r>x){
				swap(r, x);
			}
			if(x-r>=3){
				cout << "00";
			}else if(x-r==1){
				if(x==4&&r==3){
					cout << "00";
				}else{
					cout << "11";
				}
			}else{ //x-r==2
				if(r==1&&x==3){
					cout << "10";
				}else{
					cout << "00";
				}
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	cout << '\n';
	return 0;
}