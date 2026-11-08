#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
//t4看起来能想正解，但是现在只能优先保分了 预计得分24 
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	map<int,int> mp;
	for(int i=1;i<=n;i++){
		map<int,int> st,ap;
		vector<int> x;
		x.push_back(a[i]);
		st[a[i]]=1;
		for(int j=i+1;j<=n;j++){
			x.push_back(a[j]);
			if(st[a[j]]){
				for(int l=0;l<x.size();l++){
					if(ap[l]!=1&&x[l]==a[j]){
						for(int r=l;r<x.size()-1;r++){
							//if(i==1) cout<<r<<' ';
							ap[r]=1;
						}
						//cout<<'\n';
						break;
					}
				}
			} 
			st[a[j]]=1;
		}
		map<int,int> have_add;
		for(int j=0;j<x.size();j++){
			if(ap[j]!=1&&have_add[x[j]]!=1){
				//if(i==1) cout<<x[j]<<' ';
				have_add[x[j]]=1;
				mp[x[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<mp[i]<<' ';
	}
	return 0;
} 
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/
