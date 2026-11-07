#include<bits/stdc++.h>
using namespace std;
long long a[1000000];char c[10005551];
string x; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int f=0;
	for(int i=1;i<n;i++){
	if(c[i]!=c[i+1]){
		f=1;
	}
	}
	if(f==0){
		cout<<"0";return 0;
	}
	int y=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			x[y]=c[i];
			y++;
		}
	}int ans=0;
	for(int i=1;i<=y;i++){
		if(x[i]!=x[y]){
			x[y]=x[i];
			ans++;
			y--;
		}
	}
	cout<<ans;
	return 0;
}
