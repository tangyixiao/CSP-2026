#include <bits/stdc++.h>
using namespace std;
int n = 0,x = 0,cnt = 0,kk = 0;
char s[100000000050],y;
 int main(){
 	freopen("string.in","r",stdin) ;
 	freopen("string.out","w",stdout);
 	cin >> n;
 	for(int i = 0;i < n;i++){
 		cin >> x >> y;
 		for (int j = kk;j < kk+x;j++){
 			s[j] = y;
		 }
		kk += x;
	}
	for(int i = 0;(2*i)<=(kk-1);i++){
		if(s[kk-i-1] != s[i]){
			cnt++;
		}
	}
	cout << cnt;
	
 	fclose(stdin);
 	fclose(stdout);
 	return 0;
 }