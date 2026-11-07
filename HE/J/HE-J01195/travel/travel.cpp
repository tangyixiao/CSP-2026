#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ans = 0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) cout << 1;
	else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	for(int i = 0;i < 2;i ++){
		if(s1[i] == s2[i]){
			ans++;
		}
	}
	if(ans == 2) cout << 1;
	else cout << 0;
	if(s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C'){
		if(ans == 2 && s2[2] == 'A' || s2[2] == 'B'|| s2[2] == 'C') cout << 1;
		else cout << 0;
	}
	else if(ans == 2 && s2[2] == 'D' || s2[2] == 'F'){
		cout << 1;
		if(ans == 2) cout << 1;
		else cout << 0;
	}
	else cout << 0;
	if(s1[2] == 'A' || s1[2] == 'B' && s2[2] == 'A' || s2[2] == 'B'){
		if(ans == 2) cout << 1;
		else cout << 0;
	}
	else if (s1[2] == 'B' || s1[2] == 'C' && s2[2] == 'B' || s2[2] == 'C'){
		if(ans == 2) cout << 1;
		else cout << 0;
	}
	else{
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
