#include <bits/stdc++.h>
using namespace std;
vector<int> cs;
int cnt[200005];
int a[200005];
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	for(int i = 1;i<=n;i++){
		cs.clear();
		for(int j = i;j<=n;j++){
			cs.push_back(a[j]);
			bool flag = 0;
			for(int k = 0;k<j;k++){
				if(flag=1){
					cs[k] =0;
				}  
				if(cs[k] == a[j] && cs[k] != 0){
					flag=1;
				} 
			} 
		}
		for(int j = 0;j<cs.size();j++){
			cnt[cs[j]]++;
		}
		
	}
	for(int i = 1;i<=m;i++){
		cout << cnt[i] << ' ';
	}
	return 0;
} 
