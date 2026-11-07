#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector<int> v;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		int cnt = 0;
		for(int j = 1;j <= n;j++){
			if(a[i] == a[j]){
				a[i] += a[j];
			}
		}
		for(int j = 1;j <= n;j++){
			if(v[i] != a[j]){
				cnt++;
			}
		}
		cout << cnt << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
