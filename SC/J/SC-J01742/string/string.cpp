#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n;
char s[N];
int a[N];
int cnt,x;
signed main(){
	   freopen("string.in","r",stdin);
	   freopen("string.out","w",stdout);
	   ios::sync_with_stdio(false);
	   cin.tie(nullptr);
	   cin>>n;
	   for(int i=1;i<=n;i++){
	   	cin>>a[i]>>s[i];
	   }
	   int l=1,r=n;
	   while(l<=r){
	   	x=min(a[l],a[r]);
	   	if(s[l]!=s[r]){
	   		cnt+=x;
		   }
		   a[l]-=x;
		   a[r]-=x;
		   if(a[l]<=0)l++;
		   if(a[r]<=0)r--;
	   }
	   cout<<cnt;
	   return 0;
}