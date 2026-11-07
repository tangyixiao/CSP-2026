include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	string h,l;
	cin >> m >> h >> n >> l;
	if(m == n){
		cout << "1";
		int s2 = string h[0];
		int d2 = string h[1];
		int s1 = string l[0];
		int d1 = string l[1];
		int s = s2 * 10 + d2;
		int d = s1 * 10 + d1;
		if(s == d){
			cout << "1";
			if(h[2] <= 'C' && l[2] <= 'C' || h[2] > 'C' && l[2] > 'C'){
				cout << "1";
				if(int [2] - int l[2] == 1 || int [2] - int l[2] == -1){
					cout << "1";
				}else{
					cout << "0";
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
		
	}else{
		cout << "0000";
	}
	return 0;
}
