#include<bits/stdc++.h>
using namespace std;
int n,m,a[300001],ans[300001],ans[300001],ans2[300001],s[300001];
bool flag=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		if(i!=1&&a[i]<a[i-1]){
			flag=false;
		}
	}
	if(flag){
		for(int i = 1;i<=n;i++){
			if(!s[a[i]])s[a[i]]=i;
		}
		for(int i = 1;i<=n;i++){
			if(i!=1&&a[i]==a[i-1]){
				ans[a[i]]=i-1;
			}
		}
		int last=n;
		for(int i = m-1;i>=1;i--){
			if(s[i]){
				ans2[i]=last;
				last=ans[i];
			}
		}
		for(int i = 1;i<=m;i++){
			if(s[i]){
				cout<<ans2[i]-s[i]<<" ";
			}
		}
	}
	else{
		int cnt1=0,cnt2=0,ans1=0,ans2=0;
		for(int i = 1;i<=n;i++){
			cnt1+=(a[i]==1);
			cnt2+=(a[i]==2);
			if(cnt1>1){
				cnt1=1,cnt2=0;
			}
			if(cnt2>1){
				cnt1=0,cnt2=1;
			}
			if(cnt1)ans1++;
			if(cnt2)ans2++;
		}
		cout<<ans1<<" "<<ans2;
	}
	return 0; 
}