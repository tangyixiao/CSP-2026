#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[10000005];
int s1[10000005];
int s2[10000005];
int s3[10000005];
int and1(int x,int y){
	s1[10000005]={};
	s2[10000005]={};
	s3[10000005]={};
	int t1=x,t2=y,s=0,r=0,l=0;
	while(t1>0){
		s1[++s]=t1%2;
		t1/=2;
	}
	while(t2>0){
		s2[++r]=t2%2;
		t2/=2;
	}
//	for(int i=1;i<=s;i++){
//		cout<<s1[i];
//	}
//	cout<<" ";
//	for(int i=1;i<=r;i++){
//		cout<<s2[i];
//	}
//	cout<<" ";
	l=max(s,r)-min(s,r);
	for(int i=1;i<=l;i++){
		s3[i]=0;
	}
	int o=0;
	if(s>=r){
		for(int i=l+1;i<=max(s,r);i++){
			if(s1[i]==s2[++o]&&s1[i]==1){
				s3[i]=1;
			}
		}
	}else{
		for(int i=l+1;i<=max(s,r);i++){
			if(s2[i]==s1[++o]&&s2[i]==1){
				s3[i]=1;
			}
		}
	}
	int ans=0,f=0;
	for(int i=1;i<=max(s,r);i++){
		ans+=pow(2,f++)*s3[max(s,r)-i+1];
	}
//	for(int i=1;i<=max(s,r);i++){
//		cout<<s3[i];
//	}
//	cout<<"\n";
	return ans;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	int cnt=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		cnt=and1(cnt,a[i]);
	}
	cout<<cnt;
	
	return 0;
}