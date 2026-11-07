#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string c1,s1,c2,s2;

void check(){
	string ans = "0000";
	if (c1 == c2){
		ans[0] = '1';
		
		if (s1[0] == s2[0] && s1[1] == s2[1]){
			ans[1] = '1';
			
			char z1 = s1[2],z2 = s2[2];
			if (z1 > z2)   swap(z1,z2);
			if (z1=='A'&&z2=='B' || z1=='A'&&z2=='C' || z1=='B'&&z2=='C' || z1=='D'&&z2=='F'){
				ans[2] = '1';
				
				if (z1=='A'&&z2=='B' || z1=='B'&&z2=='C' || z1=='D'&&z2=='F'){
					ans[3] = '1';
				}
			}
		}
	}
	
	cout << ans;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0),cin.tie(0);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	check();
	
	return 0;
}