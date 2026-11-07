#include<bits/stdc++.h>
using namespace std;
int n, m, ans[500005];
int a[500005];
vector<int> b[500005];
int main(){
    freopen("card.in","r", stdin);
    freopen("card.out","w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    	b[a[i]].push_back(i);
	}
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n;){
			bool f = 0;
			for(int k = j + 1; k <= n; k++){
				if(a[j] == a[k]){
					f = 1;
					j = k;
					ans[a[j]]++;
					break;
				}
			}
			if(!f){
				j++;
				ans[a[j]]++;
			}
		}
	}
	for(int i = 1; i <= m; i++){
    	cout << ans[i] <<' ';
	}
    return 0;
}