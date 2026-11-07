#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	long long a[1000005];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a + 1 , a + n + 1 , greater<int>());
	long long ans = 0;
	for(int i=1;i<=n;i++){
		if(a[i] != a[i+1]){
			ans++;
		}
		if(ans == m){
			cout << a[i];
			return 0;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
