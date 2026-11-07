#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,x1,r2,x2,ans;
	cin >> r1 >> r2 >> x1 >> x2;
	if (r1 == x1){
		ans += '1';
	}else{
		ans += '0';
	}
	if (r2[0]==x2[0] && r2[1]==x2[1]){
		ans += '1'; 
	}else{
		ans += '0';
	}
	if (r2[2]-x2[2]==1 || r2[2]-x2[2]==-1){
		if ((r2[2]=='B' && x2[2]=='C') || (r2[2]=='C' && x2[2]=='B')){
			ans += '00';
		}else{
			ans += '11';
		}
	}else{
		if ((r2[2]=='A' && x2[2]=='C') || (r2[2]=='C' && x2[2]=='A')){
			ans += '10';
		}else{
			ans += '00';
		}
	}
	cout << ans;
	return 0;
}
