#include <bits/stdc++.h>
using namespace std;
long long n;
char c[2000086];
long long o=0;
bool ck(int x){
	for(int i = 0 ,j = o-1; i < o&&j >= 0; i++,j--){
	    if(c[i] != c[j]){
	    	return false;
		}
	}
	return true;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++){
		long long a1;
		char c1; 
		cin >> a1 >> c1;
		for(int j = 0; j < a1 ;j++){
			c[o++] = c1;
		}
	}
	if(ck(1)){
		cout << 0;
		return 0;
	}
	int l = 0;
	for(int i = 0,j=o-1; i < o && j >= 0; i++,j--){
		if(c[i] != c[j]){
			l++;
			c[j] = c[i];
			if(ck(1)){
				cout << l;
				return 0;
			}
		}
	}
	return 0;
}
