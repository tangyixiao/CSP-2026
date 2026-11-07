#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int N = 5e5 + 5;
int wz[N];
int cnt[N];
int card[N];
int mn[N];
int n , m;

void clean(){
	for(int i = 1 ; i <= n ; ++i)wz[i] = -1;
}

signed main(){
	
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1 ; i <= n ;++i)cin >> card[i];
//	cout << 1 << endl;
	for(int i = 1 ; i <= n ; ++i){
		clean();
		int k = 1;
//		cout << 2 << endl;
		for(int j = i ; j <= n ; ++j){
//			cout << k << " " << card[j] << " " << wz[card[j]]<< endl;
			if((wz[card[j]] == -1) || ((wz[card[j]] != -1) && (wz[card[j]] >= k)) ){
				wz[card[j]] = k;
				mn[k] = card[j];
				k++;
//				cout << "3 "  << mn[k - 1] << " " << wz[card[j]]<< endl;
			}else{
				k = wz[card[j]] + 1;
//				cout << 4 << endl;
			}
		}
//		cout << 5 << endl;
		for(int j = 1 ; j < k ; ++j)cnt[mn[j]]++;//cout << mn[j] << " ";
	}                      
	for(int i = 1 ; i <= m; ++i)cout << cnt[i] << " ";
	return 0;
}