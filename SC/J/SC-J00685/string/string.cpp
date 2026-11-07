#include<bits/stdc++.h>
using namespace std;
struct X{
	long long a;
	char c;
}a[200005];
bool cmp(X a,X b){
	return a.a<b.a;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].c;
		if(a[i].c==a[i-1].c){
			a[i-1].a+=a[i].a;
			i--;n--;
		}
	}
	long long l=1,r=n,ans=0;
	while(l<=r){
		if(a[l].c==a[r].c){
			if(a[l].a<=a[r].a){
				a[r].a-=a[l].a;
				l++;
			}
			else{
				a[l].a-=a[r].a;
				r--;
			}
		}
		else{
			if(a[l].a<=a[r].a){
				ans+=a[l].a;
				a[r].a-=a[l].a;
				l++;
			}
			else{
				ans+=a[r].a;
				a[l].a-=a[r].a;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
} 