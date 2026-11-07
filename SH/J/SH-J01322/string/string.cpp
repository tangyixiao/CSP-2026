#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin >> n;
	int a[200010];
	char c[200010];
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
	}
	int i = 1, j = n;
	long long ans = 0;
	while(i<j){
		if(c[i]==c[j]){
			if(a[i]>a[j]){
				a[i] -= a[j];
				j--;
			}else if(a[i]==a[j]){
				i++;
				j--;
			}else{
				a[j] -= a[i];
				i++;
			}
		}else{
			if(a[i]>a[j]){
				ans += a[j];
				a[i] -= a[j];
				j--;
			}else if(a[i]==a[j]){
				ans += a[j];
				i++;
				j--;
			}else{
				ans += a[i];
				a[j] -= a[i];
				i++;
			}
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
