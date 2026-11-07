#include<bits/stdc++.h> 

using namespace std;

int n, m, v;
int a[500005], ans[300005], t[500005], b[300005];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	
	if(m <= 200){
		for(int i = 0; i < n; i ++){
			v = 0;
			for(int j = i; j < n; j ++){
				for(int k = 0; k < v; k ++){
					if(t[k] == a[j]){
						v = k;
					}
				}
				t[v] = a[j];
				v ++;
			}
			for(int j = 0; j < v; j ++){
				ans[t[j]] ++;
			}
		} 
		for(int i = 1; i <= m; i ++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	else{
		ans[a[0]] ++;
		for(int i = 1; i < n; i ++){
			ans[a[i]] ++;
			if(a[i] != a[i - 1]){
				ans[a[i]] += ans[a[i - 1]];
			}
		} 
		for(int i = 1; i <= m; i ++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	 
	return 0;
}
