#include <bits/stdc++.h>
using namespace std;
long n, a, cnt=0,len= 0; char c;
char s[10005];


int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);


	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> c;
		len+=a;
		for(int j = 0 ; j < a; j++){
			s[i]= c;
		}	
	}



	for(int i = len-1; i >= 0 ;i--){
		if(s[i] != s[len-1-i]){
			s[i] = s[len-1-i];
			cnt++;

		}
		
		
	}
	cout << cnt;
	return 0;
}
