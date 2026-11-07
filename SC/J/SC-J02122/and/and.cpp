#include<bits/stdc++.h>
using namespace std;
bool cmp(int x, int y){
	return x > y; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m;
	cin >> n >> m;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	} 
	sort (a, a+n, cmp);
	int cnt = 0;
	int j = 0;
	while(cnt == 0){
		cnt = a[j];
		for(int i = j+1; i < j+m; i++){
			cnt = cnt & a[i];
		}
		j++;
	}
	cout << cnt;
	return 0;
} 