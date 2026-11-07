#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],ans[500010];
deque<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(s.empty()){
				s.push_back(a[j]);
				continue;
			}
			bool f=0;
			for(int k=0;k<s.size();k++){
				if(s[k]==a[j]){
					for(int l=s.size()-1;l>=k;l--){
						s.pop_back();
					}
					f=1;
					break;
				}
			}
			if(!f) s.push_back(a[j]);
		}
		for(int j=0;j<s.size();j++){
			ans[s[j]]++;
			s.pop_front();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
