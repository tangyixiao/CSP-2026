#include<bits/stdc++.h>
using namespace std;
int n;
struct f{
	int x;
	char y;	
}a[200010];
long long ans;
int main(){
	int t=1;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		cin>>a[i].y;
	}
	char l=1;
	char r=n;
	while(l<r){
		if(a[l].y!=a[r].y){
			ans+=max(a[l].x,a[r].x);
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}