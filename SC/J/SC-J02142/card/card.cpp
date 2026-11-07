#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int b[300005],a[500005],n,m;
bool check(int x){
	for(int i=1;i<=v.size();i++){
		if(v[i]==a[x]){
			return false;
		}
	}
	return true;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(check(j)){
				v.push_back(a[j]);
			}else{
				for(int k=0;k<v.size();k++){
					v[k]=0;
				}
				v.push_back(a[j]);
			}
		}
		for(int j=0;j<v.size();j++){
			b[v[j]]++;
		}
	}
	for(int i=1;i<m;i++){
		cout<<b[i]-1<<" ";
	}
	cout<<b[m];
	return 0;
}