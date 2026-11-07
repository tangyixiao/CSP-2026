#include<bits/stdc++.h>
using namespace std;
int n,m,k,p[500005],l[500005];
vector<int> v;
int check(int l){
	for(int i=0;i<v.size();i++)
		if(v[i]==l) return i;
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>p[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(check(p[j])!=-1){
				int x=v.size()-check(p[j]);
				while(x--){
					v.erase(v.begin()+check(p[j])+1);
				}
			}
			v.push_back(p[j]);
		}
		for(int j=0;j<v.size();j++)
			l[v[j]]++;
		v.clear();
	}
	for(int j=1;j<=k;j++)
		cout<<l[j]<<" ";
	return 0;
}
