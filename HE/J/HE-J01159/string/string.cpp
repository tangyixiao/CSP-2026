#include <bits/stdc++.h>
using namespace std;
string s,a;
int n,z,cnt;
int main(){
	freopen("string3.in","r",stdin);
	freopen("string3.out","w",stdout);
	cin >> n;
	int i = 0;
	while(n --){
		cin >> z >> a;
		for(int j = 0;j < z;j ++,i ++){
			s += a;
		}
	}
	int x = 0,y = s.length();
	for(int x = 0,y = s.length() - 1;x < y;x ++,y --){
		if(s[x] != s[y]){
			cnt ++;
		}
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
