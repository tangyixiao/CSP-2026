#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	string o1,a1,o2,a2;
	cin >> o1 >> a1 >> o2 >> a2;
	if(o1 == o2){
		cout << 1;
		bool ff = true;
		for(int i = 0;i < 2;i++){
			if(a1[i] != a2[i]){
				ff = false;
			}
		}
		if(ff == true){
			cout << 1;
			if(a1[2] == 'A' || a1[2] == 'B' || a1[2] == 'C'){
				if(a2[2] == 'A' || a2[2] == 'B' || a2[2] == 'C'){
					cout << 1;
					if(abs(a1[2]-a2[2]) == 1){
						cout << 1;
					}else{
						cout << 0;
					}
				}else{
					cout << "00";
				}
			}else{
				if(a2[2] == 'D' || a2[2] == 'F'){
					cout << 1;
					if(abs(a1[2]-a2[2]) == 1){
						cout << 1;
					}else{
						cout << 0;
					}
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
	
	return 0;
} 
