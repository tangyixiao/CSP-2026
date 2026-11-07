#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++){
		scanf("%lld%c",&a[i],&b[i]);
	}
	long long l=1,r=n,ans=0;
	while(l<r){
		if(b[l]==b[r]){
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}else if(a[l] > a[r]){
				a[l]-=a[r];
				r--;
			}else{
				r--;
				l++;
			}
		}else{
			if(a[l]<a[r]){
				a[r]-=a[l];
				ans+=a[l];
				l++;
			}else if(a[l] > a[r]){
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}else{
				ans+=a[r];
				r--;
				l++;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}