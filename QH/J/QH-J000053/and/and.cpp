#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],q=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	while(q<=a[n]){
		q*=2;
	}
	q/=2;
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(m==n){
		int num=a[1];
		for(int i=2;i<=n;i++){
			num=num&a[i];
		}
		cout<<num;return 0;
	}
	if(m==2){
		int num=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				num=max(num,a[i]&a[j]);
			}
		}
		cout<<num;return 0;
	}
	if(m==n-1){
		int ma=-1;
		for(int i=1;i<=n;i++){
			int num=a[i/n+1];
			for(int j=1;j<=n;j++){
				if(j!=i) num=num&a[i];
				
			}
			ma=max(ma,num);
		}
		cout<<ma;return 0;
	}
	cout<<a[n-m+1];
	
	return 0;
} 
