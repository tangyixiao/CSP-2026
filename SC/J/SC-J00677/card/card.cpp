#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5,M = 2e5+5;
int a[N],c[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin >> n >> m;
	bool flagA = true;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(i && a[i] < a[i-1]) flagA = false;
	}
	if(flagA){
		for(int i = 0;i < n;i++){
			c[a[i]] = i+1;
		}
		for(int i = 1;i <= m;i++) cout << c[i] << ' ';
	}else{
		for(int i = 0;i < n;i++){
			map<int,int> mp;
			for(int j = i;j < n;j++){
				if(mp.find(a[j]) != mp.end() && mp[a[j]] != -1){
					for(int k = mp[a[j]];k < j;k++){
						mp[a[k]] = -1;
					}
				}
				mp[a[j]] = j;
			}
			for(int j = 1;j <= m;j++){
				if(mp.find(j) != mp.end() && mp[j] != -1) c[j]++;
				//cout << c[j] << ' ';//debug
			}
			//cout << '\n';//debug
		}
		for(int i = 1;i <= m;i++) cout << c[i] << ' ';
	}
	return 0;
}