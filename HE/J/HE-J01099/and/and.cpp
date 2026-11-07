#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],num,ans=-1;
bool mieval[200005][33];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int> bb;
	for(int i=1;i<=n;i++){
		int j=0;
		cin>>a[i];
		bb.push_back(i);
		int shu=a[i];
		while(1){
			mieval[i][j]=(shu&1);
			shu>>=1;
			if(shu==0){
				break;
			}
			j++;
		}
		num=max(num,j);
	}
//	cout<<n;
//	for(int j=1;j<=n;j++){
//		for(int i=0;i<=4;i++){
//			cout<<mieval[j][i];
//		}
//		cout<<'\n';
//	}
	
	bool flag=0;
//	cout<<num;
	for(int i=num;i>=0;i--){
		vector<int> aa;
//		cout<<aa.size();
		for(int j=0;j<bb.size();j++){
			if(mieval[bb[j]][i]==1){
				aa.push_back(bb[j]);
			}
		}
//		cout<<aa.size();
		if(aa.size()>m){
			bb=aa;
			flag=1;
		}
		else if(aa.size()==m){
//			cout<<1;
			while(aa.size()){
				if(ans==-1){
					ans=a[aa.back()];
				}
				else{
					ans=(ans&a[aa.back()]);
				}
				aa.pop_back();
			}
			cout<<ans;
			return 0;
		}
	}
	int js=0;
//	for(int i=0;i<bb.size();i++){
//		cout<<bb[i]<<' ';
//	}
	while(bb.size()){
//		cout<<1;
//		cout<<bb.back()<<' ';
		if(ans==-1){
			ans=a[bb.back()];
		}
		else{
			ans=(ans&a[bb.back()]);
		}
		bb.pop_back();
		js++;
		if(js==m){
			cout<<ans;
			return 0;
		}
	}
	return 0;
}
/*
4 2
3 15 12 12

4 3
8 0
*/
