#include <bits/stdc++.h>
using namespace std;
long long n , a[200005] , ans;
string b[200005];
int main()
{
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout); 
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] >> b[i];
	}
	int l = 1 , r = n;
	while(l < r){
		if(b[l] != b[r]){
			ans += min(a[l] , a[r]);
			if(a[l] < a[r]){
				a[r] -= a[l];
				a[l] = 0;
				l++;
			}
			else if(a[l] > a[r]){
				a[l] -= a[r];
				a[r] = 0;
				r--;
			}
			else{
				a[l] = 0;
				a[r] = 0;
				l++;
				r--;
			}
		}
		
		if(b[l] == b[r]){
			if(a[l] < a[r]){
				a[r] -= a[l];
				a[l] = 0;
				l++;
			}
			else if(a[l] > a[r]){
				a[l] -= a[r];
				a[r] = 0;
				r--;
			}
			else{
				a[l] = 0;
				a[r] = 0;
				l++;
				r--;
			}
		}
	}
	cout << ans;
}