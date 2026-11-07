#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int n,m,a[500010],ans[300010];
vector<int> g;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		g.clear();
		for(int j=i;j<=n;j++){
			if(g.size()!=0){
				for(int p=0;p<g.size();p++){
					if(g[p]==a[j]){
						while(g[g.size()-1]!=a[j]){
							g.erase(g.begin()+g.size()-1);
						}
						g.erase(g.begin()+g.size()-1);
					}
				}
			}
			g.push_back(a[j]);
		}
		for(int p=0;p<g.size();p++){
			ans[g[p]]++; 
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
