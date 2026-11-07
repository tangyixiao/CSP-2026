#include <bits/stdc++.h>
using namespace std;
int n, a[200010];
long long cnt;
char b[200010];
bool flag;
string s;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> b[i];
	}
	int i = 1, j = n;
	while(i <= j){
		flag = 0;
		if(a[i] > a[j]){
			flag = 1;
		}
		if(b[i] == b[j]){
			if(flag == 1){
				a[i] -= a[j];
				j--;
			}
			else{
				a[j] -= a[i];
				i++;
				if(a[j] == 0){
					j--;
				}
			}
		}
		else{
			if(flag == 1){
				a[i] -= a[j];
				cnt += a[j];
				j--;
			}
			else{
				a[j] -= a[i];
				cnt += a[i];
				i++;
				if(a[j] == 0){
					j--;
				}
			}
		}
	}
	cout << cnt;
	return 0;
} 
