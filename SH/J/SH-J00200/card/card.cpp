#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int n, m;
int arr[N];
struct TMP {
	int idx, v;
}tmp[N];
bool cmp(TMP a, TMP b){
	if(a.v != b.v) return a.v < b.v;
	else return a.idx < b.idx;
}
bool vis[N];
int cnt[N];
int back[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
		tmp[i].v = arr[i];
		tmp[i].idx = i;
	}
	sort(tmp + 1, tmp + 1 + n, cmp);
	for(int i = 1; i <= n; i++){
		if(tmp[i + 1].v == tmp[i].v) back[tmp[i].idx] = tmp[i + 1].idx;
		else back[tmp[i].idx] = -1;
	}
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			if(back[j] != -1){
				j = back[j] - 1;
			}
			else{
				cnt[arr[j]]++;
			}
		}
	}
	for(int i = 1; i <= m; i++) cout << cnt[i] << ' ';
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

