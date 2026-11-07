#include<bits/stdc++.h>
using namespace std;


int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string cr,sr,cx,sx;
	cin >> cr >> sr >> cx >> sx;
	string a = {'A','B','C','D','F'};
	if(cr == cx){
		cout << "1";
		if(sr[1] == sx[1]){
			cout << "1";
			if(sr[2] == a[0]||sr[2] == a[1]||sr[2] == a[2] && sx[2] == a[0]||sx[2] == a[1]||sx[2] == a[2]){
				cout << "1";
				if(sr[2]==a[0]&&sx[2]==a[1]){
					cout << "1";
				}
				else if(sr[2]==a[1]&&(sx[2]==a[0]||sx[2]==a[2])){
					cout << "1";
				}
				else if(sr[2]==a[2]&&sx[2]==a[1]){
					cout << "1";
				}else cout << "0";
			}
			else if(sr[2] == a[3]||sr[2] == a[4] && sx[2] == a[3]||sx[2] == a[4]){
				cout << "1" << "1";
			}else cout << "0" << "0";
		}else cout << "0" << "0" << "0";
		
	}else cout << "0" << "0" << "0" << "0";

	
	return 0;
}
