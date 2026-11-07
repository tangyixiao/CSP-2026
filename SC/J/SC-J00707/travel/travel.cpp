#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1 , c2 , s1 , s2;
int a1 = 0 , a2 = 0;
bool b(char c){
	if(c < 'D')return 0;
	else return 1;
}signed main(){
	ios::sync_with_stdio(0) , cin.tie(0);
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for(int i = 0; i < 2; i ++){
		a1 *= 10 , a1 += (c1[i] - '0');
		a2 *= 10 , a2 += (c2[i] - '0');
	}if(a1 == a2)cout << 1;
	else{
		cout << "0000";
		return 0;
	}a1 = a2 = 0;
	for(int i = 0; i < 2; i ++){
		a1 *= 10 , a1 += (s1[i] - '0');
		a2 *= 10 , a2 += (s2[i] - '0');
	}if(a1 == a2)cout << 1;
	else{
		cout << "000";
		return 0;
	}if(b(s1[2]) == b(s2[2]))cout << 1;
	else{
		cout << "00";
		return 0;
	}if(abs((int)(s1[2] - s2[2])) == 1)cout << 1;
	else cout << 0;
	return 0;
}