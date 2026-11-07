#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int n,m,a[maxn],t[maxn],flag=0;
vector <int> vt;
set <int> st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>=2&&a[i]>=a[i-1]) flag++;
	} 
	if(flag==n-1){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++) st.insert(a[j]);
			for(auto v:st) t[v]++;
			st.clear();
		}
		for(int i=1;i<=m;i++) cout<<t[i]<<" ";
		cout<<endl;
	}
	else{
		for(int k=1;k<=n;k++){
			for(int i=k;i<=n;i++){
				for(int j=1;j<int(vt.size());j++){
					if(a[i]==vt[j-1]){
						vt.erase(vt.begin()+j-1,vt.end());
						break;
					} 
				}
				vt.push_back(a[i]);
			}
			for(int i=0;i<int(vt.size());i++) t[vt[i]]++;
			vt.clear();
		}
		for(int i=1;i<=m;i++) cout<<t[i]<<" ";
		cout<<endl;
	}
	return 0;
}