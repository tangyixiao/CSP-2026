#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],sum;
char s[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)scanf("%d %c",a+i,s+i);
	for(int i=1,j=n;i!=j;){
		if(a[i]<=a[j]){
			if(s[i]!=s[j])sum+=a[i];
			a[j]-=a[i];
			a[i]=0;
			i++;
		}
		else{
			if(s[i]!=s[j])sum+=a[j];
			a[i]-=a[j];
			a[j]=0;
			j--;
		}
	}
	cout<<sum;
	return 0;
}