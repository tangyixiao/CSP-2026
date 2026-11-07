#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5;
int a[N],ans[N];
int cnt[N];
int n,m;
int find(int x){
	for(int i=1;i<=n;i++)if(cnt[i]==x)return i;
	return 0;
}
void qs(int x){
	for(int i=x;i<=n;i++)cnt[i]=0;
}
void t(){
	for(int i=1;i<=n;i++)ans[cnt[i]]++;
}
void mm(){
	for(int i=1;i<=n;i++)cnt[i]=0;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		mm();
		for(int j=i;j<=n;j++){
			int sum=find(a[j]);
			if(sum==0)cnt[j]=a[j];
			else{
				qs(sum);
				cnt[j]=a[j];
			}
		}
		t();
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
