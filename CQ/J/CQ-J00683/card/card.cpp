#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int a[500001];
int cnt[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int xx=1;xx<=n;xx++){
		vector<int> s;
		for(int i=xx;i<=n;i++){
			for(int j=0;j<s.size();j++){
				if(s[j]==a[i]){
					int k=s.size()-1;
					while(k!=j){
						k--;
						s.pop_back();
					}
					s.pop_back();
					break;
				}
			}
			s.push_back(a[i]);
		}
		for(int i=0;i<s.size();i++){
			if(s[i]<=m){
				cnt[s[i]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}

