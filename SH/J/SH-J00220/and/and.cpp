#include<bits/stdc++.h>
using namespace std;
vector<int> v[40];
int a[200001],ans[200001],temp[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int k=a[i];
		int wei=0;
		while(k){
			wei++;
			if(k%2==1) v[wei].push_back(a[i]);
			k/=2;
		}
	}
	bool flag=0;
	int ctans=0;
	for(int i=30;i>=1;i--){
		if(v[i].size()<m) continue;
		else if(!flag){
			flag=1;
			ctans=v[i].size();
			for(int j=1;j<=ctans;j++) ans[j]=v[i][j-1];
			sort(ans+1,ans+ctans+1);
			if(ctans==m){
				int sa=ans[1];
				for(int j=2;j<=m;j++) sa=sa & ans[j];
				cout<<sa;
				return 0;
			}
		}
		else{
			int ttc=0;
			for(int j=0;j<v[i].size();j++){
				if(v[i][j]>ans[ctans]) continue;
				int pos=lower_bound(ans,ans+ctans+1,v[i][j])-ans;
				if(ans[pos]==v[i][j]){
					temp[++ttc]=v[i][j];
				}
			}
			if(ttc>=m){
				ctans=ttc;
				for(int i=1;i<=ctans;i++) ans[i]=temp[i];
				sort(ans+1,ans+ctans+1);
			} 
			if(ctans==m){
				int sa=ans[1];
				for(int j=2;j<=m;j++) sa=sa & ans[j];
				cout<<sa;
				return 0;
			}
		}
	}
	int sa=ans[1];
	for(int j=2;j<=m;j++) sa=sa & ans[j];
	cout<<sa;
	fclose(stdin);
	fclose(stdout);
}
