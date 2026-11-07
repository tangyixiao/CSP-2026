#include <bits/stdc++.h>
using namespace std;

int a[200005] = {0};
bool flag[200005] = {false};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin >> n >> m;
	
	for(int i = 1;i <= n;i++)	cin >> a[i];
	
	int sum = 0;
	for(int i = 31;i >= 0;i--){
		int cnt = 0;
		for(int j = 1;j <= n;j++){
			if(flag[j] == true)	continue;
			if((a[j] >> i) % 2 == 1)	cnt++;
		}

		if(cnt >= m){
			sum += pow(2,i);
			for(int j = 1;j <= n;j++){
				if((a[j] / int(pow(2,i)) < 1))	flag[j] = true;
				a[j] %= (2 << i);
			}
		}
	}
	
	cout << sum;
	return 0;
}
