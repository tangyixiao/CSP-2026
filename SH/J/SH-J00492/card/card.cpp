#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int cnt[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vector<int>q;
		for(int j=i;j<=n;j++){
			int aim=0;
			for(int k=0;k<q.size();k++){
				if(q[k]==a[j]){
					aim=q.size()-k;
					break;
				}
			}
			while(q.size() && aim){
				q.pop_back();
				aim--;
			}
			q.push_back(a[j]);
		}
		for(int j=0;j<q.size();j++){
			cnt[q[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
}
