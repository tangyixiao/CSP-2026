#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[5009];
int t[3009];
vector<int>dsk;
void project(int k){
	for(int i=0;i<dsk.size();i++){
		if(dsk[i]==k){
			for(int j=1;j<=dsk.size()-i;j++){
				dsk.pop_back();
			}
			dsk.push_back(k); 
			return;
		}
	}
	dsk.push_back(k);
	return;
}
void fcheck(){
	int bj[3009]={};
	for(int i=0;i<dsk.size();i++){
		if(bj[dsk[i]]==0){
			t[dsk[i]]++;
			bj[dsk[i]]=1;
		}
	}
	return;
}
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){//局
		dsk.clear();
		for(int j=i;j<=n;j++){//打出
			project(a[j]);
		}
		fcheck();
	}
	for(int i=1;i<=m-1;i++){
		cout<<t[i]<<' ';
	}
	cout<<t[m];
	fclose(stdin);
	fclose(stdout);
	return 0;
}