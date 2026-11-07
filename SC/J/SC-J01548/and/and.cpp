#include<bits/stdc++.h>
using namespace std;
long long int a[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int da=0;
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>da){
				da=a[i];
			}
		}
		cout<<da;
		return 0;
	}
	if(m==n){
		int q=a[1];
		for(int i=2;i<=n;i++){
			q=q&a[i];
		}
		cout<<q;
		return 0;
	}
	if(m==2){
		int d=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(a[i]&a[j]>d){
					d=a[i]&a[j];
				}
			}
		}
		cout<<d;
		return 0;
	}
	if(m==n-1){
		long long int x=0,xiao=10^12;
		for(int i=1;i<=n;i++){
			if(a[i]<xiao){
				xiao=a[i];
				x=i; 
			} 
		}
		int q=a[1];
		if(x==1){
			for(int i=2;i<=n&&i!=x;i++){
				q=q&a[i];
			}
		}else{
			q=a[2];
			for(int i=3;i<=n;i++){
				q=q&a[i];
			}
		}
		cout<<q;
		return 0; 
	}
	if(n<=20){
		sort(a+1,a+n+1);
		long long int s=a[n];
		for(long long int i=n-1;i>=n-m+1;i--){
			s=s&a[i];
		}
		cout<<s;
		return 0;
	}
	cout<<a[n-m+1];
	return 0;
} 
