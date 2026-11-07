//T4 ±©Á¦ 6/25
#include <bits/stdc++.h>
using namespace std;
int n,m,c[500010],box[300010];
vector<int> a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>c[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=0;k<a.size();k++){
				if(a[k]==c[j]){
					while(k!=a.size()) a.erase(a.begin()+k);
					break;
				}
			}
			a.push_back(c[j]);
		}
		for(int i=0;i<a.size();i++) box[a[i]]++;
		a.clear();
	}
	for(int i=1;i<=m;i++) cout<<box[i]<<' ';
	return 0;
}
