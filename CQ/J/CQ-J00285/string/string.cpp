#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
char c[N];
long long s[N],ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i]>>c[i],s[i]=s[i-1]+a[i];
    long long mid=(s[n]+1)/2;
    int p=lower_bound(s+1,s+n+1,mid)-s;
    long long left=mid-s[p-1],right=s[p]-mid;
    if(s[n]%2) left--;
    int l=p,r=p;
    while(l>0 && r<=n){
    	if(c[l]!=c[r]) ans+=min(left,right);
    	long long k=min(left,right);
    	left-=k,right-=k;
    	if(left==0) left=a[--l];
    	if(right==0) right=a[++r];
	}
	cout<<ans;
	return 0;
}

