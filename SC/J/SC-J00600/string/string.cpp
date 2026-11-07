#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
long long ans=0;
int l[200005],r[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
	}
	int left=1,right=n;
	int lcov=0,rcov=0;
	while(left<=right){
		int llen=a[left]-lcov,rlen=a[right]-rcov;
		if(c[left]!=c[right]){
			ans+=min(llen,rlen);
		}
		if(llen==rlen){
			lcov=rcov=0;
			left++;
			right--;
			
		}else{
			if(llen<rlen){
				lcov=0;
				rcov+=llen;
				left++;
			}else{
				rcov=0;
				lcov+=rlen;
				right--;
			}
		}
	}
	cout<<ans;
}