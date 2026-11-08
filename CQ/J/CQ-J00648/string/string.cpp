#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int n;
long long ans=0;
int a[N];
char c[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int i=1,j=n;
	while(i<j){
		if(a[i]==a[j]){
			if(c[i]!=c[j]) ans+=a[i];
			i++;
			j--;
		}else{
			if(a[i]>a[j]){
				if(c[i]!=c[j]) ans+=a[j];
				a[i]-=a[j];
				j--;
			}else if(a[i]<a[j]){
				if(c[i]!=c[j]) ans+=a[i];
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
