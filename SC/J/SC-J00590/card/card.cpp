#include<bits/stdc++.h> 
using namespace std;
int a[500010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	vector<int> s;
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			for(int k=0; k<s.size(); k++){
				if(s[k]==a[j]){
					s.erase(s.begin()+k,s.end());
					break;
				}
			}
			s.push_back(a[j]);
		}
		for(int j=0; j<s.size(); j++){
			ans[s[j]]++;
		}
		s.clear();
	}
	for(int i=1; i<=m; i++){
		cout << ans[i] << ' ';
	}
	return 0;
}