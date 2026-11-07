#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	vector<pair<int,int>> E(n+1);
	for(int i=0;i<n;i++){
		char c;
		cin>>E[i].first>>c;
		E[i].second=c-'a';
	}
	ll cnt = 0;
	int l=0,r=n-1;
	while(l!=r){
		if(E[l].first>=E[r].first){
			if(E[r].second!=E[l].second){
				cnt+=E[r].first;
			}
			E[l].first-=E[r].first;
			r--;
		}else{
			if(E[r].second!=E[l].second){
				cnt+=E[l].first;
			}
			E[r].first-=E[l].first;
			l++;
		}
	}
	cout<<cnt;
	return 0;
}
