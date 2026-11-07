#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c,d;
	string s,g;
	cin >> c >> s >> d >> g;
	if(c != d){
		cout << "0000";
	}
	else if(s[0] != g[0] || s[1] != g[1]){
		cout << "1000";
	}
	else if(s[2] == 67 && g[2] == 68||g[2]  == 67 && s[2] == 68){
		cout << "1100";
	}
	else if(s[2] - 1 !=g[2] && g[2] - 1 != s[2]){
		cout << "1110";
	}
	else{
		cout << "1111";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}