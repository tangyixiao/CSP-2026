#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1000;
int n;
char a[N];
long long b[N];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i]>>a[i];
	}
	long long r=n,i=1,l=0;
	while(r>=i){
		l+=b[i];
		while(l>=b[r]){
			if(a[i]!=a[r]){
				ans+=min(b[r],l);
			}
			if(b[r]<=l){
				l-=b[r];
				r--;
			}else{
				b[r]-=l;
				l=0;
			}
		}
		if(l>0){
			if(a[i]!=a[r]){
				ans+=l;
			}
			if(b[r]<=l){
				l-=b[r];
				r--;
			}else{
				b[r]-=l;
				l=0;
			}
		}
		i++;
	}
	cout<<ans;
	return 0;
}
