#include<bits/stdc++.h>

using namespace std;
/*
scanf("%d", &x);
printf("%d", x);
*/
const int N = 5e5 + 10, M = 3e5 + 10;
int n, m; 
int a[N];
int b[N];
int jsq = 0;
int cnt[M];
int tot[M];
vector<int> v[M]; 

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w",stdout);
	
	bool oo = true;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		if(!(a[i] >= a[i - 1])) oo = false;
	}
	
	if(oo){
		for(int i = 1; i <= n; i++){
			if(tot[a[i]] == 0){
				cnt[a[i]] = n - i + 1;
			}
			tot[a[i]]++;
		}
		for(int i = 1; i <= m; i++){
			printf("%d ", cnt[i]);
		}
	}else if(n <= 500){
		for(int i = 1; i <= n; i++){
			fill(tot + 1, tot + 1 + m, 0);
			jsq = 0;
			for(int j = i; j <= n; j++){
				if(tot[a[j]]){
					for(int k = 1; k <= m; k++){
						if(tot[k] > tot[a[j]]) tot[k] = 0;
					}
					jsq = tot[a[j]] - 1;
					tot[a[j]] = 0;
				}
				b[++jsq] = a[j];
				tot[a[j]] = jsq;
			}
//			cout << "di " << i << " ju\n";
			for(int j = 1; j <= jsq; j++){
				cnt[b[j]]++;
//				cout << b[j] << ' ';
			}
//			cout << '\n';
		}
		
		for(int i = 1; i <= m; i++){
			printf("%d ", cnt[i]);
		}
	}else{
		for(int i = 1; i <= n; i++){
			v[a[i]].push_back(i);
		}
		for(int i = 1; i <= n; i++){
			int l = i; int r = n;
			fill(b + 1, b + 1 + n, 0);
			for(int j = 1; j <= m; j++){
				int maxn = -1, minn = 1e9;
				for(int k = 0; k < v[j].size(); k++){
					if(v[j][k] >= l && v[j][k] <= r){
						maxn = max(maxn, v[j][k]);
						minn = min(minn, v[j][k]);
					}
				}
				if(maxn == -1){
					
				}else{
					b[minn]++;
					b[maxn + 1]--;
				} 
			}
			for(int j = 1; j <= n; j++){
				b[j] += b[j - 1];
			}
			for(int j = i; j <= n; j++){
				if(!b[j]) cnt[a[j]]++;
			}
		}
		
		for(int i = 1; i <= m; i++){
			printf("%d ", cnt[i]);
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
/*
11 5
1 1 1 1 2 2 2 3 3 4 5

4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
