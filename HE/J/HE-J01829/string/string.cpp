#include<bits/stdc++.h>
using namespace std;
    int n,a[100010];
    char s[100010];
    long long o=0,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	scanf("%d",&a[i]);
	cin>>s[i];
	o+=a[i];
	}
	long long l=0,r=o;
	int le=1,ri=n;
	o/=2;
	while(l<=o<=r && le+1<=ri){
	if(s[le]==s[ri]){
	ans-=min(a[le],a[ri]);
	}
	ans+=min(a[le],a[ri]);
	le++;
	ri--;
	if(l<r){
	l+=min(a[le],a[ri]);
	r-=max(a[le],a[ri]);
	}
	else{
	l+=max(a[le],a[ri]);
	r-=min(a[le],a[ri]);
	}
	}
	cout<<ans;
	return 0;
}
