/*#include<bits/stdc++.h>
using namespace std;
struct num{
	long long x;char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long sum=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
		sum+=a[i].x;
	}
	long long s=sum/2,cnt1=1,cnt2=n,j1=1,j2=1;
	if(sum%2!=0) s++;
	for(long long i=1;i<=s;i++){
		if(a[cnt1].c!=a[cnt2].c){
			ans++;
		}
		j1++;
		j2++;
		if(j1>a[cnt1].x){
			j1=1;
			cnt1++;
		}
		if(j2>a[cnt2].x){
			j2=1;
			cnt2--;
		}
	}
	cout<<ans;
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
struct num{
	long long x;char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long sum=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
		sum+=a[i].x;
	}
	long long s=sum/2,cnt1=1,cnt2=n;
	if(sum%2!=0) s++;
	while(cnt1!=cnt2){
		if(a[cnt1].c!=a[cnt2].c){
			ans+=min(a[cnt1].x,a[cnt2].x);
		}
		if(a[cnt1].x>a[cnt2].x){
			a[cnt1].x-=a[cnt2].x;
			cnt2--;
		}
		else{
			a[cnt2].x-=a[cnt1].x;
			cnt1++;
		}
	}
	cout<<ans;
	return 0;
}
