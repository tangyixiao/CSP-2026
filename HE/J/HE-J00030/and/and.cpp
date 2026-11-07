#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100010],num,ans,sum,nans;
long long b[500010],maxx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
		b[a[i]]++;
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=maxx;i++){
		if(b[i]>=num){
			ans=i;
			num=b[i];
		}
	}
	if(num>=m){
		cout<<ans<<endl;
	}else{
		sum=m-num;
		nans=ans;
		for(int i=1;i<=n;i++){
			if(a[i]!=ans){
				sum--;
				nans&=a[i];
			}
			if(sum=0){
				break;
			}
		}
		cout<<nans<<endl;
	}
	return 0;
}
