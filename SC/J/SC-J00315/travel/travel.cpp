#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1;
	}else{
		cout << "0000" << endl;
		return 0;
	}
	int p1 = (s1[0] - '0') * 10 + (s1[1] - '0'),p2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	if(p1 == p2){
		cout << 1;
	}else{
		cout << "000" << endl;
		return 0;
	}
	char h1 = s1[2],h2 = s2[2];
	int bh1,bh2;
	if(h1 == 'F' || h1 == 'D'){
		bh1 = 1;
	}else{
		bh1 = 0;
	}
	if(h2 == 'F' || h2 == 'D'){
		bh2 = 1;
	}else{
		bh2 = 0;
	}
	if(bh1 == bh2){
		cout << 1;
	}else{
		cout << "00" << endl;
		return 0;
	}
	if(h1 + 1 == h2 || h1 - 1 == h2){
		cout << 1 << endl;
	}else{
		cout << "0" << endl;
	}
	return 0;
}