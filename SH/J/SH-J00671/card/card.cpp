#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],b[500005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int i=1;
	while(n--){
		vector<int> v;
		v.push_back(a[i]);
		for(int j=i+1;j<=n;j++){
			for(int k=0;k<v.size();k++){
				if(v[k]==a[j]){
					for(int w=k;w<=v.size();w++) v[w]=0;
				}
			}
			v.push_back(a[j]);
		}
		for(int j=0;j<v.size();j++){
			if(v[j]!=0) b[v[j]]++;
		}
		i++;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
