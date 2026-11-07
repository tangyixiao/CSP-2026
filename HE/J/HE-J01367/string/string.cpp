#include <bits/stdc++.h>
using namespace std;
int a[200005];
int b[200005];
char c[200005];
char d[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i]>>d[i];
	}
	long long sum=0;
	for(int i=1;i<n;i++){
		if(d[i]==d[i+1]){
			b[i+1]=b[i]+b[i+1];
			b[i]=-1;
		}
	}
	int s=0;
	for(int i=1;i<=n;i++){
		if(b[i]!=-1){
			s++;
			a[s]=b[i];
			c[s]=d[i];
		}
	}
	for(int i=1;i<=s/2;i++){
		if(c[i]==c[s+1-i]&&a[i]!=a[s+1-i]){
			if(a[i]>a[s+1-i]){
				sum+=(0ll+a[i]-a[s+1-i]);
			}else{
				sum+=(0ll+a[s+1-i]-a[i]);
			}
		}else if(c[i]!=c[s+1-i]&&a[i]==a[s+1-i]){
			sum+=(0ll+a[i]);
		}else if(c[i]!=c[s+1-i]&&a[i]!=a[s+1-i]){
			if(a[i]>a[s+1-i]){
				sum+=(0ll+a[i]);
				a[s-i]-=(a[i]-a[s+1-i]);
			}else{
				a[i+1]-=(a[s+1-i]-a[i]);
			}
		}
	}
	cout<<sum;
	return 0;
}
