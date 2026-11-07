#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
struct StringL{
	char c;
	ll len;
}ls[N];
int n;
ll sum,cnt;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		ll x;char s;
		cin>>x>>s;
		ls[i].c=s;
		ls[i].len=x;
		sum+=x;
	}
	ll l=1,r=n,llen=0;
	while(llen<=sum/2&&l<=r){
		if(ls[l].len==0)l++;
		if(ls[r].len==0)r--;
		ll minx=min(ls[l].len,ls[r].len);
		if(minx+llen>sum/2+1)minx=sum/2+1-llen;
		if(ls[l].c!=ls[r].c){cnt+=minx;}
		ls[l].len-=minx;ls[r].len-=minx;
		llen+=minx;
	}
	cout<<cnt;
	return 0;
}
	