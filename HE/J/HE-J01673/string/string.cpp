#include<bits/stdc++.h>
using namespace std;
struct s{
	long long a;
	char c;
}f[200005];
int main(){
	freopen("string.in ","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l=1,r,ans=0;
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>f[i].a>>f[i].c;
	}if(n==1){
		cout<<0;
		return 0;
	}while(l<r){
		if(f[l].c!=f[r].c){
			ans+=min(f[l].a,f[r].a);
		}
		if(f[l].a>f[r].a){
			f[l].a-=f[r].a;
			r--;
		}else if(f[l].a<f[r].a){
			f[r].a-=f[l].a;
			l++;
		}else{
			r--;
			l++;
		}
	}cout<<ans;
	return 0;
} 
