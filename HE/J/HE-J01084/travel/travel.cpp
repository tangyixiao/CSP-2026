#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c, s, c1, s2;
	cin >> c >> s >> c1 >> s2;
	if(c == c1){
		cout << 1;
	}
	else{
		cout << 0;
	}
	if(s[0] == s2[0] && s[1] == s2[1]){
		cout << 1;
		if(((s[2] == 'A' || s[2] == 'B' || s[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C'))){
		    cout << 1;
	    }
	    else if(((s[2] == 'D' || s[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F'))){
		    cout << 1;
	    }
	    else{
		    cout << 0;
	    }
	}
	else{
		cout << 0;
	}
	if(s[2] == s2[2] && (s2[1] == s2[1] + '1' || s[1] == s2[1] + '1')){
		cout << 1;
	}
	else{
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
