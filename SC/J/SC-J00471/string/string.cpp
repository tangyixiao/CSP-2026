#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans,cnt,sum;
char b[2000005];
struct no{
	int num;
	char ch;
}a[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].ch;
		sum+=a[i].num;
		for(int j=0;j<a[i].num;j++){
			b[++cnt]=a[i].ch;
		}
	}
	int mid=(cnt+1)/2;
	for(int i=1;i<=mid;i++){
		int j=cnt-i+1;
		if(a[i].ch!=a[j].ch){
			++ans;
		}
	}
	cout<<ans;
	return 0;
}