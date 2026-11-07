#include<bits/stdc++.h>

using namespace std;

int a[200005];
char c[200005];
long long ans=0;
int n,sum;
string s=" ";

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	
	cin>>n;
	for(int i=1;i<=n;++i){
		scanf("%d %c",&a[i],&c[i]);
		sum+=a[i];
		for(int j=1;j<=a[i];++j){
			s+=c[i];
		}
	}
	for(int i=1;i<=sum/2;++i){
		if(s[i]!=s[sum-i+1])++ans;
	}
	cout<<ans;
	return 0;
}
