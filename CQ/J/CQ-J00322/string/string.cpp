#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,len,a[N],s[N],s2[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		len+=a[i];
		s[i]=s[i-1]+a[i];
	}
	s2[n+1]=len;
	for(int i=n;i>=1;i--) s2[i]=s2[i+1]-a[i]; 
	int l=1,r=len,ans=0;
	int i=1,j=n;
	while(l<=len/2&&r>=len-(len+1)/2&&i!=j){
		int llen=s[i]-l+1,rlen=r-s2[j];
		if(llen>rlen){
			r=s2[j];
			if(c[i]!=c[j]){
				ans+=rlen;
			}
			l+=rlen;
			j--;
		}else{
			l=s[i]+1;
			if(c[i]!=c[j]){
				ans+=llen;
			}
			r-=llen;
			i++;
		}
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

3
2 a
2 b
1 c
*/
