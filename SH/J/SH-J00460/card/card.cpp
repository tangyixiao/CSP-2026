#include <bits/stdc++.h>
using namespace std;
struct Event{
	int left;
	int right;
};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1);
	vector<int> nxt(m+1,-1);
	vector<int> cnt(m+1,0);
	vector<Event> events;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(nxt[a[i]]!=-1) events.push_back({nxt[a[i]],i});
		nxt[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		vector<bool> filled(m+1,false);
		vector<bool> locked(n+1,false);
		if(i>1) fill(locked.begin()+1,locked.begin()+i,true);
		for(auto &event : events){
			if(!locked[event.left]&&!locked[event.right]){
				fill(locked.begin()+event.left,locked.begin()+event.right,true);
			}
		}
		for(int j=i;j<=n;j++){
			if(!locked[j]){
				if(!filled[a[j]]){
					cnt[a[j]]++;
					filled[a[j]]=true;
				}
			}
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<cnt[i];
		if(i!=m) cout<<" ";
	}
	cout<<"\n";
	return 0;
}
