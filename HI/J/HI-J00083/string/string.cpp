#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	vector < pair<long long,char> > v;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		if(!v.empty() && c == v[v.size() - 1].second){
			v[v.size() - 1].first += a;
		}else{
			v.push_back({a,c});
		}
	}
	long long ans = 0LL;
	int l = 0,r = v.size() - 1;
	while(l < r){
		if(v[l].second == v[r].second){
			if(v[l].first > v[r].first){
				v[l].first -= v[r].first;
				r -= 1;
			}else if(v[l].first < v[r].first){
				v[r].first -= v[l].first;
				l += 1;
			}else{
				v[l].first = 0;
				v[r].first = 0;
				l += 1;
				r -= 1;
			}
		}else {
			if(v[l].first < v[r].first){
				ans = ans + v[l].first;
				v[l].second = v[r].second;
			}else{
				ans = ans + v[r].first;
				v[r].second = v[l].second;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
