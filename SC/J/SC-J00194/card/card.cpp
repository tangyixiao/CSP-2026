#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> ans(m+1);
	vector<bool> b(m+1);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		list<int> t;
		for(int j=i;j<n;j++){
			t.push_back(a[j]);
		}
		for(int j=1;j<=m;j++){
			b[j]=0;
		}
		for(auto iter=t.begin();iter!=t.end();iter++){
			if(b[*iter]==1){
				for(auto j=t.begin();j!=iter;j++){
					if(*j==*iter){
						t.erase(j,iter);
						break;
					}
				}
			}
			b[*iter]=1;
			
		}
		for(auto iter=t.begin();iter!=t.end();iter++){
			ans[*iter]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	
}