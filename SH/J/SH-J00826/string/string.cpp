#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long sum = 0;
	cin >> n;
	string h = "";
	for(int i = 1; i <= n; i++){
		long long a;
		char x;
		cin >> a >> x;
		sum += a;
		while(a--){
			h += x;
		}
	}
	int cnt = 0;
	for(int i = 0; i < h.size(); i++){
		if(h[i] != h[h.size() - n - 1]) cnt++;
	}
	if(cnt == 0) cout << cnt;
	else if(sum % 2 == 0) cout << cnt;
	else cout << cnt - 1;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
