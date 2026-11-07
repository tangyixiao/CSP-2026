#include <bits/stdc++.h>
using namespace std;
long long n,x,sum[200010],t,ans,lst;
char s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>x>>s[i];
		sum[i]=x+sum[i-1];
	}
	t=sum[n];
	int i=1,j=n-1;
	while(i<=j){
		if(sum[i]>t-sum[j]){
			if(s[j+1]!=s[i]){
				ans=ans+t-sum[j]-lst;
			}
			lst=t-sum[j];
			j--;
		}
		else if(sum[i]<t-sum[j]){
			if(s[j+1]!=s[i]){
				ans=ans+sum[i]-lst;
			}
			lst=sum[i];
			++i;
		}
		else{
			if(s[j+1]!=s[i]){
				ans=ans+sum[i]-lst;
			}
			lst=sum[i];
			--j;
			++i;
		}
	}
	cout<<ans;
	return 0;
}
