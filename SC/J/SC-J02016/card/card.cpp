#include<iostream>
#include<vector>
#include<set>
using namespace std;
int b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	vector<int> desktop;
	set<int> now;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(now.count(a[j])==0){
				desktop.push_back(a[j]);
				now.insert(a[j]);
			}else{
				now.clear();
				int t=1;
				bool bo=0;
				for(auto k:desktop){
					if(k==a[j]){
						bo=1;
					}
					if(bo)desktop.erase(desktop.begin()+t,desktop.begin()+t+1);
					t++;
				}
				for(auto k:desktop){
					now.insert(k);
				}
			}
		}
		for(auto j:desktop){
			b[j]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<' ';
	return 0;
}