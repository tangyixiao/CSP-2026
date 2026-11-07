#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+10;
int n,mid,ans,cnt;
int a[maxn];
char c[maxn];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		mid+=a[i];
	}
	mid/=2;
//	cout<<mid;
	int j=n;
	for(int i=1;i<=n,cnt<mid;){
//		cout<<cnt<<" "<<a[i]<<' '<<a[j]<<"\n";
		if(a[i]>=a[j]){
			cnt+=a[j];
			if(c[i]!=c[j]){
				ans+=a[j];
				a[i]-=a[j];
			}else{
				a[i]-=a[j];
			}
			j--;
		}else{
			cnt+=a[i];
			if(c[i]!=c[j]){
				ans+=a[i];
				a[j]-=a[i];
			}else{
				a[j]-=a[i];
			}
			i++;
		} 
	} 
	cout<<ans;
	return 0;
}