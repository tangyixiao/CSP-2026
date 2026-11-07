#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int ans[300010];
vector <int> v;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			bool flag=0;
			int d=-1;
			for(int k=0;k<v.size();k++){
				if(v[k]==a[j]){
					flag=1;
					d=k;
					break;
				}
			}
			if(flag==1){
				while(d!=v.size()){
					v.pop_back();
				}
			}
			else v.push_back(a[j]);
		}
		for(int j=0;j<v.size();j++) cout<<v[j]<<" ";
		cout<<endl;
		for(int j=0;j<v.size();j++){
			ans[v[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
