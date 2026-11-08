#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a1[105],b1[105],a2[105],b2[105];
	for(ll i = 1;i <= 2;i ++)
		cin >> a2[i];
	for(ll i = 1;i <= 3;i ++)
		cin >> a1[i];
	for(ll i = 1;i <= 2;i ++)
		cin >> b2[i];
	for(ll i = 1;i <= 3;i ++)
		cin >> b1[i];
	if(a2[1] == b2[1] && a2[2] == b2[2]){
		if(a1[1] == b1[1] && a1[2] == b1[2]){
			if((char)a1[3] - 1 == b1[3] || (char)b1[3] - 1 == a1[3]){
				if((a1[3] == 'C' && b1[3] == 'D') || (a1[3] == 'D' && b1[3] == 'C'))
					cout << "1100";
				else
					cout << "1111";
			}else if((a1[3] == 'D' && b1[3] == 'F') || (a1[3] == 'F' && b1[3] == 'D')){
				cout << "1111";
			}else if((a1[3] >= 'D' && b1[3] <= 'C') || (b1[3] >= 'D' && a1[3] <= 'C')){
				cout << "1100";
			}
			else{
				cout << "1110";
			}
		}else{
			cout << "1000";
		}
	}else{
		cout << "0000";
	}
	return 0;
}

