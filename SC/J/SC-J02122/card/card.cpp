#include<bits/stdc++.h>
using namespace std;
int b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		vector <int> table; 
		for(int j = i; j < n; j++){
			bool flag = false;
			int cnt;
			for(int k = 0; k < table.size(); k++){
				if(a[j] != table[k]){
					continue;
				}
				else{
					flag = true;
					cnt = k;
                    break;
				}
			}
			if(flag){
				for(int k = cnt+1; k < table.size(); k++){
					table[k] = 0;
				}
			}
			else{
				table.push_back(a[j]);
			}
		}
		for(int j = 0; j < table.size(); j++){
			b[table[j]]++;
		}
	}
	for(int i = 1; i <= m; i++){
		cout << b[i] << " ";
	}
	return 0;
} 