#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
string s;
long long a[N];
char b[N];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.ans","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(l+1<=r){
		if(a[l]<a[r]){
			a[r]-=a[l];
			if(b[l]==b[r]){
				l+=1;
				continue;
			}
			ans+=a[l];
			l+=1;
			continue;
		}
		if(a[l]==a[r]){
			if(b[l]==b[r]){
				l+=1;
				r-=1;
				continue;
			}
			ans+=a[l];
			l+=1;
			r-=1;
			continue;
		}
		if(a[l]>a[r]){
			a[l]-=a[r];
			if(b[l]==b[r]){
				r-=1;
				continue;
			}
			ans+=a[r];
			r-=1;
			continue;
		}
	}
	cout<<ans;
	return 0;
	
}
