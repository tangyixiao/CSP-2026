#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt=0,c[500005];
vector<int> v;
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int f=0;f<v.size();f++){
				if(v[f]==a[j]){
					int ca=v.size();
					for(int jjj=f;jjj<ca;jjj++) v.pop_back();
					break;
				}
			}
			v.push_back(a[j]);
		}
		for(int j=0;j<v.size();j++){
			c[v[j]]++;
		}
		while(!v.empty()) v.pop_back();
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<' ';
	}
}
