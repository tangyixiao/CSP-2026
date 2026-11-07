#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],ans[500010];
vector<int> t;
bool f(int x){
	for(int i=0;i<t.size();i++){
		if(x==t[i]){
			return 1;
		}
	}
	return 0;
}
void era(int p){
	for(int i=1;i<=(t.size()-1-p+1);i++){
		t.pop_back();
	}
}
void ce(){
	for(int j=0;j<t.size();j++){
		cout << t[j] << ' ';		
	}
	cout << '\n';
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		while(t.size()){
			t.pop_back();
		}
		
		for(int j=i;j<=n;j++){
			if(!f(a[j])){
				t.push_back(a[j]);
			}
			else{
				for(int k=0;k<t.size();k++){
					if(t[k]==a[j]){
						era(k);
					}
				}
			}
		}
		for(int j=0;j<t.size();j++){
			ans[t[j]]++;	
		}
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	return 0;
} 