#include<bits/stdc++.h>

using namespace std;
const int N=1e6+10;
int pow(int a,int b,int p){
	int s=1;
	while(b){
		if(b&1) s=s*a%p;
		a=a*a%p;b>>=1;
	}
	return s;
}
int n;
long long ans,a[N];
char s[N];
void sol(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	int l=1,r=n;
	while(l<r){
		if(s[l]==s[r]){
			if(a[l]==a[r]){
				l++,r--;
				continue;
			}
			else{
				if(a[l]<a[r]){
					a[r]-=a[l];l++;
					continue;
				}
				else{
					a[l]-=a[r];r--;
					continue;
				}
			}
		}
		else{
			if(a[l]==a[r]){
				ans+=a[l];
				l++,r--;
				continue;
			}
			else{
				if(a[l]<a[r]){
					ans+=a[l];
					a[r]-=a[l];l++;
					continue;
				}
				else{
					ans+=a[r];
					a[l]-=a[r];r--;
					continue;
				}
			}
		}
	}
	cout<<ans;
	return ;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t=1;
	while(t--) sol();
	return 0;
}
//solve in 8:50:11
