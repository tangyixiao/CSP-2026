#indcle <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	doule C1,S1,C2,S2;
	cin >> C1 >> S1 >> C2 >> S2;
	if(C1==C2){
		cout << 1 << 1;
	}
	else{
		cout << 0 << 0;
	}
	if(S1!=S2){
		cout << 1 << 1;
	}
	else{
		cout << 0 << 0;
	}
	return 0;
}
