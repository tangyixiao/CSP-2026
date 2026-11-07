#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
char c1[200005];
int c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	long long ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c1[i];
		ans+=a[i];
		c[i]=c1[i]-'a'+1;
	}
	ans/=2;
	int l=1,r=n;
	long long ys=a[1],ye=a[n],cnt=0;
	while(l<r){
		if(ys>ye){
			if(c[l]!=c[r]){
				cnt+=ye;
			}
			ys-=ye;
			r--;
			ye=a[r];
		}else if(ys<ye){
			if(c[l]!=c[r]){
				cnt+=ys;
			}
			ye-=ys;
			l++;
			ys=a[l];
		}else{
			if(c[l]!=c[r]){
				cnt+=ys;
			}
			l++;
			r--;
			ys=a[l];
			ye=a[r];
		}
	}
	cout<<cnt;
	return 0;
}