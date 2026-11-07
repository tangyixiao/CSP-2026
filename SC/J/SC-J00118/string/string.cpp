#include<bits/stdc++.h>
using namespace std;
long long n,k,ans;
struct node{
	long long a;
	char b;
}m[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i].a>>m[i].b;
	}for(int i=1,j=n;i<=n/2+n%2,j>=n/2+1;i++,j--){
		if(m[i].a>=m[j].a){
			k=m[i].a-m[j].a;
			if(m[i].b!=m[j].b){
				ans+=m[j].a;
			}if(m[i].b!=m[j-1].b){
				ans+=k;
			}
		}else{
			k=m[j].a-m[i].a;
			if(m[i].b!=m[j].b){
				ans+=m[i].a;
			}if(m[i+1].b!=m[j].b){
				ans+=k;
			}
		}
	}cout<<ans;
	return 0;
}