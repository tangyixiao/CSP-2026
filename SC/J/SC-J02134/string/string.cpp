#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[100005],ans;
char x[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>x[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==0) continue;
		for(int j=n;j>i;j--){
			if(a[j]==0) continue;
			if(a[j]!=0&&a[i]!=0){
				if(x[j]!=x[i]){
					if(a[i]<=a[j]){
						ans+=a[i];
						a[j]-=a[i];
						a[i]=0;
					}else{
						ans+=a[j];
						a[i]-=a[j];
						a[j]=0;
					}
				}else{
					if(a[i]<=a[j]){
						a[j]-=a[i];
						a[i]=0;
					}else{
						a[i]-=a[j];
						a[j]=0;
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}