#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int l=1,r=n;
	int cnt=a[1],tot=a[n];
	long long ans=0;
	while(l<=r){
		if(cnt>tot){
			cnt-=tot;
			if(c[l]!=c[r])ans+=tot;
			r--;
			tot=a[r];
		}else if(cnt<tot){
			tot-=cnt;
			if(c[l]!=c[r])ans+=cnt;
			l++;
			cnt=a[l];
		}else{
			if(c[l]!=c[r])ans+=tot;
			l++,r--;
			cnt=a[l],tot=a[r];
		}
	}
	cout<<ans;
	return 0;
}
