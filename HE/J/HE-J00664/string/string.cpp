#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,ans=0;
struct node{
	long long q;
	char c;
}a[N];
int main(){
	freopen("string.in","r",stdin);
		freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].q>>a[i].c;
	long long i=1,k=n;
		while(k>=i){
			long long kk=abs(a[i].q-a[k].q);
			i=n-k+1;
			if(i>=k)break;
		if(a[i].q==a[k].q&&a[i].c!=a[k].c)ans+=a[i].q;
		if(a[i].q==a[k].q&&a[i].c==a[k].c)ans=ans;
		if(a[i].c==a[k].c){
			   if(a[i].q>a[k].q)a[k-1].q-=kk;
				         else a[i+1].q-=kk;
		}else{
				ans+=max(a[i].q,a[k].q);
				         if(a[i].q>a[k].q)a[k-1].q-=kk;
				         else a[i+1].q-=kk;
				     }
			k--;
			//cout<<k<<" "<<i<<" "<<ans<<" ";
		}
	cout<<ans;
	return 0;
}
