#include <bits/stdc++.h>
using namespace std;
#define int long long

int a[1000];

signed main(){
	
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	string c1 , s1 , c2 , s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	cout << (c1 == c2);
	
	string sr; sr = s1[0] +s1[1];
	string sx; sx = s2[0] +s2[1];
	if((c1 == c2))cout << (sr == sx);
	else cout << 0;
	
	a[s1[2]]++; a[s2[2]]++;
	
	if((c1 == c2) && (sr == sx)){
		if((a['E'] == 1 && a['F'] == 0) || (a['E'] == 0 && a['F'] == 1))cout << 0;
		else cout << 1;
	}else cout << 0;
	
	if((sr == sx) && !((a['E'] == 1 && a['F'] == 0) || (a['E'] == 0 && a['F'] == 1))){
		for(int i = 'A' ; i <= 'F' ; ++i){
			if(a[i] == 1 && a[i + 1] == 1){
				cout << 1 << endl;
				return 0;
			}
		}
		cout << 0 << endl;
	}else cout << 0 << endl;
	
	return 0;
}