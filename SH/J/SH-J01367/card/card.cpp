#include<bits/stdc++.h>
using namespace std;
int a[500010], b[300010], c[300010], t[500010];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int s=1;
	while(s<=n){
		for(int i=s;i<=n;i++){
			t[i] = a[i];
			if(!b[t[i]]) b[t[i]] = i;
			else{
				int j = b[t[i]];
				for(j;j<i;j++){
					b[t[j]] = 0;
					t[j] = 0;
				}
				b[t[i]] = i;
			}
		}
		for(int i=s;i<=n;i++){
			c[t[i]]++;
		}
		memset(t, 0, sizeof t);
		memset(b, 0, sizeof b);
		s++;
	}
	for(int i=1;i<=m;i++){
		cout << c[i] << ' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
