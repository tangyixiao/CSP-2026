#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , a[20001];
	long long m = 1;
	char c[200001];
	char str[1500000];
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		for(int j = 1;j <= a[i];j++){
			str[m] = c[i];
			m++;
		}
	}
	int k = 0;
	long long ans = 0;
	if((m - 1) % 2 == 0){
		for(int i = (m - 1)/ 2 + 1;i <= m - 1;i++){
			k++;
			if(!(str[i] == str[i - 2 * k + 1])){
				ans++;
			}
		}
	}else{
		for(int i = (m - 1)/ 2 + 2;i <= m - 1;i++){
			k++;
			if(!(str[i] == str[i - 2 * k])){
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
