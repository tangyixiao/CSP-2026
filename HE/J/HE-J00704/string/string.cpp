#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string sa,sb,sc;
	long long ia,ib,ic = 0,id = 0;
	cin >> ia;
	for(int i = 0 ; i < ia ; i++){
		cin >> ib >> sa;
		ic += ib;
		for(int j = 0 ; j < ib ; j++){
			sb = sb + sa;
		}
	}
	for(int i = 0 ; i < ic/2 ; i++){
		if(sb[i] != sb[ic-1-i]){
			sb[i] = sb[ic-1-i];
			id++;
		}
	}
	cout << id;
	freclose(stdin);
	freclose(stdout);
	return 0;
}
