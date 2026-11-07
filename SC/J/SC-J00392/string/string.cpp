#include<bits/stdc++.h>
using namespace std;
long long n,cnt = 0;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	while(n--){
		int x;
		char y;
		cin >> x >> y;
		while(x--)s = s + y;
	}
	int u = s.size();
	if(u % 2 != 0){
		for(int i = u / 2 - 1,j = u / 2 + 1;i >= 0,j < u;i--,j++){
			if(s[i] != s[j]){
				cnt++; 
			}
		}
	}else{
		for(int i = u / 2 - 1,j = u / 2;i >= 0,j < u;i--,j++){
			if(s[i] != s[j]){
				cnt++; 
			}
		}
	}
	cout << cnt;
	return 0;
}
