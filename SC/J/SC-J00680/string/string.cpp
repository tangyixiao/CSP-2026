#include<bits/stdc++.h>
using namespace std;
long long n,cnt1=0,cnt2=0,ans=0,sum1=0,sum2=0;
struct node{
	long long num;
	string val;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a[i].num >> a[i].val;
	}
	sum1+=a[0].num;
	sum2+=a[n-1].num;
	cnt2=n-1;
	while(cnt1<n || cnt2>0){
		if(sum1>sum2){
			if(a[cnt1].val!=a[cnt2].val){
				ans+=max(sum2-max(sum1-a[cnt1].num,sum2-a[cnt2].num),(long long)0);
			}
			cnt2--;
			sum2+=a[cnt2].num;
		}
		else{
			if(a[cnt1].val!=a[cnt2].val){
				ans+=max(sum1-max(sum1-a[cnt1].num,sum2-a[cnt2].num),(long long)0);
			}
			cnt1++;
			sum1+=a[cnt1].num;
		}
	}
	if(a[cnt1].val!=a[cnt2].val){
		ans+=max(sum1-max(sum1-a[cnt1].num,sum2-a[cnt2].num),(long long)0);
	}
	cout << ans/2;
	return 0;
}