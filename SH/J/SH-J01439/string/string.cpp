#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+1;
int n,ans=0;
int a[maxn];
char c[maxn];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2){
		cout<<min(a[1],a[2]);
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	if(a[1]!=1){
		cout<<"Cannot answer!";
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(c[i]!=c[n-i+1]){
			c[n-i+1]=c[i];
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
}
