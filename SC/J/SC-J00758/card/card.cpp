#include<bits/stdc++.h>
using namespace std;
vector<int> a(500005);
vector<int> ans(500005);
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n;
	cin >> n;
	int m;
	cin >> m;
	set<int> p;
	for (int i = 1;i <= n;i ++){
		cin >> a[i];
		p.insert(a[i]);
	}
	for (int i = 1;i <= n;i ++){
		map<int,int> mo;
		int End = a[i];
		int First = a[i];
		mo[a[i]] = -1;
		for (int j = i;j <= n;j ++){
			if(!mo.count(a[j])){
				mo[End] = a[j];
				mo[a[j]] = -1;
				End = a[j];
			}
			else{
				mo[a[j]] = -1;
				End = a[j];
			}
		}
		ans[First] ++;
		while(mo[First] != -1){ 
			First = mo[First];
			ans[First] ++;
		}
		
	}
	for (int c : p){
		cout << ans[c] << " ";
	}
	return 0;
}