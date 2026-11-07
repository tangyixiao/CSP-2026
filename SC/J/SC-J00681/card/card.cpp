#include <bits/stdc++.h>
using namespace std;
int cnt[500010];
vector <int> a;
long long n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n;i++){
		int t;
		cin >> t;
		a.push_back(t);
	}
	for(int i = 0; i < n;i++){
		vector <int> b;
		for(int j = i; j < n;j++){
			int card = a[j],zt = 0;
			for(int k = 0; k < b.size();k++){
				if(b[k] == card){
					zt = 1;
					for(int h = k+1; h < b.size();h++)   b[h] = 0;
					break; 
				}
			}
			
			if(zt == 0)   b.push_back(card);
		}
		for(int k = 0; k < b.size();k++){
			cnt[b[k]]++;
		}   
	}
	for(int i = 1; i <= m;i++)   cout << cnt[i] << " ";
	return 0;
}