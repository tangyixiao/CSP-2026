#include<bits/stdc++.h>
using namespace std;
int n,a[500005],cnt,m;
vector<int>num;
bool f[300005];
int ans[300005];
int main(){
	ios::sync_with_stdio(false);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	/*
	10 3
	3 1 2 1 3 2 3 1 2 1
	*/
	for(int l=1;l<=n;l++){
//		cout<<l<<":";
		num.clear();
		for(int i=0;i<=m;i++){
			f[i]=0;
		}
		for(int i=l;i<=n;i++){
//			cout<<f[a[i]]<<' ';
			if(f[a[i]]==0){
				f[a[i]]=1;
				num.push_back(a[i]);
			}
			else{
				while(num.back()!=a[i]){
					f[num.back()]=0;
					num.pop_back();
				}
			}
//			for(int i=0;i<num.size();i++){
//				cout<<num[i]<<' ';
//			}
//			cout<<"\n";
		}
		for(int i=0;i<num.size();i++){
			ans[num[i]]++;
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}

