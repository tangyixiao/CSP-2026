#include<bits/stdc++.h>
using namespace std;

int a[500005], b[300005];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;//你知道树的英文是什么吗？是tree 那折断的树的英文的呢？是ka ber tree。 
	cin >> n >> m;
	if(m == 1){
		cout << n;
		return 0;
	}
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(b[a[i]] != 0){
			for(int j = 1;j <= n;j++){
				if(j != i) b[j]--;
			}
		}
		b[a[i]] += i;
	}
	for(int i = 1;i <= n;i++){
		if(b[i] <= 0){
			cout << 1 << " ";
			continue;
		}
		cout << b[i] << " ";
	}
	return 0;
}
