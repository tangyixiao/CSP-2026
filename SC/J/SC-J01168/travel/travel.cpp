#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) cout << "1";
	else{
		cout << "0" << "0" << "0" << "0";
		return 0;
	}
	bool a = true;
	for(int i=0;i<2;i++){
		if(s1[i] != s2[i]) a = false;
	}
	if(a == true) cout << "1";
	else{
		cout << "0" << "0" << "0";
		return 0;
	}	
	if((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')) cout << "1";
	else{
		cout << "0" << "0";
		return 0;
	}	
	if((s1[2] - s2[2] == 1) || (s2[2] - s1[2] == 1)) cout << "1";
	else cout << "0";	
	return 0;
}