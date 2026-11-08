#include<bits/stdc++.h>
using namespace std;
#define int long long

const int Gay = 1e5 + 99;
int n, a[Gay], cnt = 0;
char c[Gay], tmp[Gay*2];
char tmpr[Gay*2];
int l;

signed main(){
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i] >> c[i];
		l += a[i];
		for(int j = 0; j < a[i]; j++){
			tmp[j] = c[i];
		}
	}


	for(int i = 0; i < l; i++){
		tmpr[i] = tmp[l - i];
	} 
	
	if(tmp == tmpr){
		cnt = 0;
	}
	else{
		for(int i = 0; i < l - 1; i++){
			if(tmp[i] != tmpr[i]){
				cnt++;
			}
		}
	}
	
	cout << cnt;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
