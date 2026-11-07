#include<bits/stdc++.h>
using namespace std;

const int N = 5e5 + 10;

int a[N];
map<int,bool> mp;
int main (){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int cnt = 1;cnt <= m;cnt ++ ){	
		int ans = n - cnt + 1;
		for(int i = cnt;i <= n;i ++ ){
			if(cnt == 1) cin >> a[i];
			if(mp[a[i]]){
				int j;
				for(j = i - 1;j >= 1;j -- ){
					if(a[j] == a[i]){
						break;
					}
				}
				ans = ans - (i - j);
			}else{
				mp[a[i]] = 1 ;
			}
		}
		map<int,bool> mpp;
		int anss = 0;
		for(int i = ans;i <= n;i ++ ){
			if(mpp[a[i]] == 0){
				anss ++ ;
				mpp[a[i]] = 1;
			}
		}
		cout << anss << " ";
	}
	
	return 0;
}/*
4 3
1 2 1 3
*/
