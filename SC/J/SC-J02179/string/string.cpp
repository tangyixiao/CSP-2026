#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n;long long ans=0;cin>>n;int a[200004];char b[200004];
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	int left=1,right=n;
	while(left<right){
		if(b[left]!=b[right])ans+=min(a[left],a[right]);//+取不为回文串的一段
		if(a[left]>a[right]){
			a[left]-=a[right];right--;
		}else if(a[left]<a[right]){
			a[right]-=a[left];left++;
		}else left++,right--;
	}
	cout<<ans;
	return 0;
}