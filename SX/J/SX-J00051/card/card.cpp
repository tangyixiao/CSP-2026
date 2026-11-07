#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector<int> a(n),b(m+1);
	string a1;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int j = 0; j < n; j++)a1[j] = a[j]+'0';
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i; j++){
			int k = a1.find(a[i]+'0');
			if(k!=i){
				a1.erase(a1[i],a1[k-1]);
			}
			for(int k = 0; k < n; k++){
				b[a1[i]-'0']++;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << b[i];
	}
	return 0;
}