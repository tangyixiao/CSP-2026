#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200010],s[200010],prev,len,cnt;
char c[200010];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=prev+1;
		cin>>c[i];
		prev=s[i]+a[i]-1;
		len+=a[i];
	}
	for(int i=1;i<=n;i++){
		if(s[i]>len/2) break;
		int r=len-s[i]+1,l=len-(s[i]+a[i]-1)+1,tmp=0,idx=n;
		for(int j=idx;j>=1;j--){
			if(min(r,s[j]+a[j]-1)>=max(l,s[j])&&c[j]!=c[i]){
				tmp+=min(r,s[j]+a[j]-1)-max(l,s[j])+1;
				idx=j;
			}else{
				if(!min(r,s[j]+a[j]-1)>max(l,s[j])) break;
			}
		}
		if(tmp>=a[i]){
			tmp=a[i];
		}
		cnt+=tmp;
	}
	cout<<cnt;
	return 0;
} 
