#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N],ans[N];
bool flag=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> v;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) {
			flag=0;
		}
		v.push_back(a[i]);
	}
	if(flag==1){
		for(int i=1;i<=m;i++){
			cout<<1<<" ";
		}
		return 0;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<v.size();j++){
			if(v[j]==a[i]){
				for(int p=j;p<=v.size();p++){
					v[p]=0;
				}
				v[j]=a[i];
			}
		}
		for(int j=0;j<v.size();j++){
			cout<<v[j]<<" ";
		}
		cout<<'\n';
//		v.push_back(a[i]);
		for(int j=0;j<m;j++){
			for(int p=0;p<v.size();p++){
				if(v[p]==j) ans[j]++;
			}
		}
	}
	for(int i=0;i<m;i++) cout<<ans[i]<<" ";
	return 0;
}
