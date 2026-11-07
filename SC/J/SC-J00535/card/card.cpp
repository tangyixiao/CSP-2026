#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans[300005],bo[300005][3],cnt[200005];
struct aa{
	vector<int> s;
}s[5000];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(m<3000){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=n;i>=1;i--){
			if(bo[a[i]][1]>=1){
				for(int j=1;j<=cnt[n-i+1-bo[a[i]][2]];j++){
					s[n-i+1].s[j]=s[n-i+1-bo[a[i]][2]].s[j];
				}
				cnt[n-i+1]=cnt[n-i+1-bo[a[i]][2]];
				bo[a[i]][2]=n-i+1;
			}else{
				for(int j=1;j<=cnt[n-i];j++){
					s[n-i+1].s[j]=s[n-i].s[j];
				}
				bo[a[i]][1]++;
				bo[a[i]][2]=n-i+1;
				cnt[n-i+1]=cnt[n-i]+1;
				s[n-i+1].s[cnt[n-i+1]]=a[i];
			}
			for(int j=1;j<=cnt[n-i+1];j++){
				ans[s[n-1+1].s[j]]++;
			}
		}
	}else{
		for(int i=1;i<=n;i++){
			cin>>a[i];
			ans[a[i]]++;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}