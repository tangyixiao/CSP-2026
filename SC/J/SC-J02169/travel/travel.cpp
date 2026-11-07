#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ans=0;
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		ans++;
	} else {
		cout << "0";
	}
	if ((ans==1)&&int(s1[0] + s1[1]) == int(s2[0] + s2[1])) {
		cout << 1;
		ans++;
	} else {
		cout << "0";
	}
	if (int((s1[2]) == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'D' || s2[2] == 'F')) {
		cout<<"0";
	} else if ((s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') && (s1[2] == 'D' || s1[2] == 'F')){
		cout<<"0";
	}else if(ans==2){
		cout<<"1";
		ans++;
	}else{
		cout<<"0";
	}
	if(ans==3&&(int(s1[2])-1==int(s2[2])||int(s1[2])+1==int(s2[2]))){
		cout<<"1";
	}else{
		cout<<"0";
	}
		return 0;
}