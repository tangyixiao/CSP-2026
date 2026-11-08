#include<bits/stdc++.h>
using namespace std;
long long l,n,a[200010],ans;
char c[200010];
int zhao(int x){
	int i=1;
	while(1){
		if(a[i]>=x){
			return c[i];
		}
		else{
			x-=a[i];
			i++;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	if(l%2==0){
		for(int i=1;i<=l/2;i++){
			int j=(l+1)-i;
			if(zhao(i)!=zhao(j)){
				ans++;
			}
		}
	}
	else{
		for(int i=1;i<=l/2;i++){
			int j=(l+1)-i;
			if(zhao(i)!=zhao(j)){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
