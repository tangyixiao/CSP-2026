#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
const long long N=1e6+5,B=131;
ll n,m,k,t,sum=0,ans=0;
struct al{
	int sum;
	char x;
}a[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].sum>>a[i].x;
		sum+=a[i].sum;
	}
	if(sum%2==1){
		k=(sum+1)/2;
		ll cnt=0;
		for(int i=1;i<=n;i++){
			cnt+=a[i].sum;
			if(cnt>=k){
				a[i].sum-=1;
				break;
			}
		}
	}
	ll cnt=0;
	int j=n+1,ok=0;
	for(int i=1;i<=n;i++){
		int cur=a[i].sum;
		char x=a[i].x;
		if(cnt+cur>=sum/2){
			cur=cur-(cnt+cur-sum/2);
			ok=1;
		}
		cnt+=cur;
		ll cnt2=0;
		while(j>=i){
			j--;
			ll cur2=a[j].sum;
			char x2=a[j].x;
			if(cnt2+cur2>=cur){
				int p=min(cur2,cur2-(cnt2+cur2-cur));
				if(x2!=x){
					ans+=p;
				}
				a[j].sum-=p;
				j++;
				break;
			}
			if(x2!=x)ans+=cur2;
			cnt2+=cur2;
		}
		if(ok)break;
	}
	cout<<ans;
	
	return 0;
	
}
/*
3
2 a
2 b
1 c

2
-
2
2 a
3 a

0
-
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

3000000000 
-

*/
