#include<bits/stdc++.h>
using namespace std;
string s;
int a[200005],n;
char c[200005];
long long ans,cnt,b;
bool f=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();cout.tie();
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[i];
		if(i!=1&&c[i-1]!=c[i]) f=1;
	}
	if(f==0){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n/2;i++){
		while(c[i]==c[n-i+1]&&a[i]>0&&a[n-i+1]>0){
			a[n-i+1]-=min(a[i],a[n-i+1]);
			a[i]-=min(a[i],a[n-i+1]);
		}
		int j=n-i+1;
		while(a[i]>0&&j>=n/2){
			if(c[i]==c[j]) a[i]-=min(a[i],a[j]),a[j]-=min(a[i],a[j]);
			else break;
			j--;
		}
	}
	for(int i=1;i<=n;i++) ans+=a[i];
	if(cnt%2==1) ans--;
	cout<<ans/2;
	return 0;
}