#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
struct edge{
	int k, len, l, r;
	char c;
}a[N];
int n, sum, ans, resl, resr;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].len>>a[i].c;
		a[i].l=sum+1;
		sum+=a[i].len;
		a[i].r=sum;
		a[i].k=i;
	}
	if(sum<=2000000000){
		int cntl=1, cntr=n;
		for(int i=1;i<=sum/2;i++){
			if(i>a[cntl].r)cntl++;
			if(sum-i+1<a[cntr].l)cntr--;
			if(a[cntl].c!=a[cntr].c)ans++;
		}
		cout<<ans;
		return 0;
	}
//	cout<<sum<<endl;
	int mid=sum/2, cnt=n;
	resr=sum;
	for(int i=1;i<=n;i++){
		if(a[i].l>=mid)break;
		if(a[i].r>mid){
//			cout<<11111;
			if(mid-a[i].l+1<a[i].r-mid)break;
			while(1){
//				cout<<cnt<<" "<<i<<endl;
				if(cnt==i)break;
				resr=a[cnt].l;
				if(a[cnt].c!=a[i].c)ans+=a[cnt].len;
				cnt--;
			}
			break;
		}
		resl=a[i].r;
		while(sum-resr+1<resl){
			resr=a[cnt].l;
			if(sum-resr+1>resl){
				a[cnt].len-=a[cnt].r-(sum-resl+1)+1;
				if(a[cnt].c!=a[i].c)ans+=a[cnt].r-(sum-resl+1)+1;
//				resr=sum-resl+1;
//			cout<<n-resl<<endl;
				break;
			}
			else if(a[cnt].c!=a[i].c)ans+=a[cnt].len;
			cnt--;
//			cout<<cnt<<" "<<resr<<" "<<resl<<" "<<ans<<endl;
		}
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c
*/
