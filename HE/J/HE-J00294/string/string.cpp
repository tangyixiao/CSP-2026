#include<bits/stdc++.h>
using namespace std;
long long n,ans;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int i=1,j=n;
	while(i<=j){
		int e=min(a[i],a[j]);
		a[i]-=e;
		a[j]-=e;
		if(c[i]!=c[j]){
			ans+=e;
		}
		if(a[j]<=0){
			j--;
		}else if(a[i]<=0){
			i++;
		}else{
			i++;
			j--;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
