#include<bits/stdc++.h>
#define endline cout<<"\n"
#define N 200005
using namespace std;
int n;
long long ans;
long long a[N];
char c[N];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];		
	}int l=1,r=n;
	while(true){
		if(l>=r){
			cout<<ans;
			break;
		}if(a[l]>a[r]){
			a[l]-=a[r];
			if(c[l]!=c[r]) ans+=a[r];
			r--;
		}else if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=a[r];
			l++;r--;
		}else{
			a[r]-=a[l];
			if(c[l]!=c[r]) ans+=a[l];
			l++;
		}
	}return 0;
} 