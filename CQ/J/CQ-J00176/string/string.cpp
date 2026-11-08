#include<bits/stdc++.h>
#define int long long
using namespace std;
string s=" ";
int n,a[200005],ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){char x;cin>>a[i]>>x;s+=x;}
	for(int i=1,j=n;i<j;){
		if(a[i]<a[j]){a[j]-=a[i];if(s[i]!=s[j])ans+=a[i];i++;}
		else if(a[i]>a[j]){a[i]-=a[j];if(s[i]!=s[j])ans+=a[j];j--;}
		else{if(s[i]!=s[j])ans+=a[j];a[i]=a[j]=0;j--;i++;}
	}
	cout<<ans;
	return 0;
}

