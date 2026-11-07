#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll n,a[N],last[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll len=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
		last[i]=a[i];
	}
	ll left=1,right=n;
	while(true){
		if(last[left]==0&&last[right]==0){
			break;
		}
		if(last[left]<=last[right]){
			if(c[left]!=c[right]){
				ans+=last[left];
			}
			last[right]-=last[left];
			last[left]=0;
			left++;
		}else{
			if(c[left]!=c[right]){
				ans+=last[right];
			}
			last[left]-=last[right];
			last[right]=0;
			right--;
		}
	}
	cout<<ans;
	return 0;
}
