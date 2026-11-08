#include<bits/stdc++.h>
using namespace std;
long long n,s,ans;
struct o{
	long long qi,zho;
	char f;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	a[1].qi=1;
	for(int i=1;i<=n;i++){
		long long ai;
		char c;
		cin>>ai>>c;
		s+=ai;
		a[i].zho=a[i].qi+ai-1;
		a[i].f=c;
		if(i!=n){
			a[i+1].qi=a[i].zho+1;
		}
	}
	long long j=n,i=1;
	while(i!=j){
		if(a[i].f!=a[j].f){
			ans+=min(a[i].zho,s-a[j].qi+1)-max(a[i].qi,s-a[j].zho+1)+1;
		}
		if(s-a[j].qi+1<a[i].zho){
			j--;
		}
		else{
			i++;
		}
	}
	cout<<ans;
	return 0;
}
