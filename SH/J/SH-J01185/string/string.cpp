#include <bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 20;
long long n, lcnt = 0, ans = 0;
int fno = 1, lno = 1, ok = 0;
struct letter{
	char l;
	long long cnt;
};
letter arr[MAXN], firsth[MAXN], lasth[MAXN];
void dumparr(){
	long long leftcnt = lcnt / 2;
	for(int i = 1; i <= n; i++){
		if(arr[i].cnt <= leftcnt){
			firsth[fno].cnt = arr[i].cnt;
			firsth[fno].l = arr[i].l;
			//cout << firsth[fno].cnt << ' ' << firsth[fno].l << endl;
			fno++; ok++;
			leftcnt -= arr[i].cnt;
		} else{
			if(leftcnt <= 0) break;
			firsth[fno].cnt = leftcnt;
			firsth[fno].l = arr[i].l;
			arr[i].cnt -= leftcnt;
			fno++;
			//cout << firsth[fno].cnt << ' ' << firsth[fno].l << endl;
			break;
		}
	}
	if(lcnt % 2 == 1){
		arr[ok + 1].cnt--; 
	}
	for(int i = n; i > ok; i--){
		lasth[lno].cnt = arr[i].cnt;
		lasth[lno].l = arr[i].l;
		//cout << lasth[lno].cnt << ' ' << lasth[lno].l << endl;
		lno++;
	}
	
}

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> arr[i].cnt >> arr[i].l;
		lcnt += arr[i].cnt;
	}
	dumparr();
	int m = 1, collp = 1;
	while(m <= fno){
		//cout << firsth[m].cnt << ' ' << lasth[collp].cnt << endl;
		if(firsth[m].cnt >= lasth[collp].cnt){
			if(firsth[m].l != lasth[collp].l){
				ans += lasth[collp].cnt;
			}
			firsth[m].cnt -= lasth[collp].cnt;
			collp++;
			//cout << firsth[m].cnt << endl;
		} else{
			if(firsth[m].l != lasth[collp].l){
				ans += firsth[m].cnt;
			}
			lasth[collp].cnt -= firsth[m].cnt;
			firsth[m].cnt = 0;
		}		
		if(firsth[m].cnt <= 0) m++;
	}
	cout << ans;
	return 0;
} 


