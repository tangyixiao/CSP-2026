#include<bits/stdc++.h>
using namespace std;
int a[200010];
vector<int>d[32];
bool v[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int mand=0;
	for(int i=30;i>=0;i--){
		memset(v,0,sizeof v);
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(a[j]>=(1<<i)){
				a[j]-=(1<<i);
				cnt++;
				v[j]=1;
			}
		}
		if(cnt>=m){
			mand+=(1<<i);
			for(int j=1;j<=n;j++){
				if(!v[j]){
					a[j]=-9191;
				}
			}
		}
//		cout<<i<<endl;
//		for(int j=1;j<=n;j++)cout<<a[j]<<" ";
//		cout<<endl;
	}
	cout<<mand;
	return 0;
}
