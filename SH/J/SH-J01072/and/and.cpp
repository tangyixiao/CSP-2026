#include<bits/stdc++.h>
using namespace std;
int a[200010];
int path[200010]={INT_MAX}; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	int ans=INT_MAX,cnt=0;
	for(int i=1;i<=m;i++){
		if((ans&a[i])==0){
			while((ans&a[i])==0&&cnt>0&&m<n){
				cnt--;
				ans=path[cnt];
				m++;
			}
		}
		ans&=a[i];
		cnt++;
		path[cnt]=ans;
	}
	cout<<ans;
	return 0;
}
