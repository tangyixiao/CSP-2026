#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char b[200010];
vector<long long> c,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0,sum=0;
	cin>>n;
	for(long long i=1;i<=n;i++)cin>>a[i]>>b[i],sum+=a[i];
	for(long long i=1,cnt=0;i<=n;i++){
		cnt+=a[i];
		if(cnt<=sum/2)c.push_back(cnt);
		else c.push_back(sum/2);
	}
	for(long long i=1,cnt=0;i<=n;i++){
		cnt+=a[n-i+1];
		if(cnt<=sum/2)d.push_back(cnt);
		else d.push_back(sum/2);
	}
	for(long long i=0,j=0,p=0;p<sum/2;){
//		cout<<i+1<<" "<<n-j<<" "<<p<<endl; 
		if(b[i+1]!=b[n-j])ans+=min(c[i],d[j])-p;
		if(c[i]<d[j])p=c[i],i++;
		else p=d[j],j++;
	}
	cout<<ans;
	return 0;
}
//电脑不好用啊 
