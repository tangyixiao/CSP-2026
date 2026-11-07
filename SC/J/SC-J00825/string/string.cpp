#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum[200005],ans;
double zhong;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
	    cin>>a[i]>>c[i];
	    sum[i]=sum[i-1]+a[i];
	    for (int j=1;j<=a[i];j++){
	    	s+=c[i];
		}
    }
    if(sum[n]%2==0) zhong=sum[n]/2+0.5;
    else zhong=sum[n]/2+1;
    ans=sum[n]/2;
    for (int i=0;i<zhong;i++){
    	if(s[i]==s[sum[n]]-i-1) ans--; 
	}
	cout<<ans;
	return 0;
}