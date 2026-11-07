#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
int n,a[N];
ll ans,len;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],len+=a[i];
	int i=1,j=n;
	while(i<j&&i<=n&&j>=1){
		if(c[i]==c[j]){
			if(a[i]<a[j]) ans+=a[i],a[j]-=a[i],a[i]==0,i++;
			else ans+=a[j],a[i]-=a[j],a[j]=0,j--;
		}else{
			if(a[i]<a[j]) a[j]-=a[i],a[i]=0,i++;
			else a[i]-=a[j],a[j]=0,j--;
		}
	}for(int i=1;i<=n;i++) ans+=a[i];
	cout<<(len-ans)/2;
	return 0;
}
