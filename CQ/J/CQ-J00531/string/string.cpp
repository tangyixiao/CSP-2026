#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5;
int n,ans=0;
struct ap{
	int a;
	char c;
}arr[N+5];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>arr[i].a>>arr[i].c;
	int i=1,j=n;
	while(i<j){
		ap x=arr[i];
		ap y=arr[j];
		int s=min(x.a,y.a);
		if(x.c!=y.c) ans+=s;
		arr[i].a-=s,arr[j].a-=s;
		if(arr[i].a==0) i++;
		if(arr[j].a==0) j--;
	}
	cout<<ans;
	return 0;
}
