#include <bits/stdc++.h>
using namespace std;
const int MAXN=200005;
int main(){
	long long n,a[MAXN];
	int sum=0,ans=0;
	int l,r,k;
	char c[MAXN],s[MAXN];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
		for(int j=sum-a[i]+1;j<=sum;j++) s[j]=c[i];
	} 
	//for(int i=1;i<=sum;i++) cout<<s[i];
	if(sum%2!=0){
		l=(1+sum)/2,r=(1+sum)/2;
		k=sum/2+1;
	}
	else if(sum%2==0){
		l=(1+sum)/2,r=l+1;
		k=sum/2;
	}
	for(int i=1;i<=k;i++){
		if(s[l]==s[r]){
			l--;
			r++;
			continue;
		}
		else if(s[l]!=s[r]){
			ans++;
			l--;
			r++;
			continue;
		}
	}
	cout<<ans;
	return 0;
}