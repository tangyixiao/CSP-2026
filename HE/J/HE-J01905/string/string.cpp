#include<bits/stdc++.h>
using namespace std;
int n;
struct st{
	int s;
	char z;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long mx=0;
	for(int i =1;i<=n;i++){
		cin>>a[i].s>>a[i].z;
		mx+=a[i].s;
	}
	long long md=mx/2;
	long long b=0;
	long long ans=0;
	for(int i =1;b<md;i++){
		b+=a[i].s;
		for(int j = n-i+1;a[i].s!=0;j--){
			if(a[j].s>=a[i].s){
				if(a[j].z!=a[i].z)ans+=a[i].s;
				a[j].s-=a[i].s;
				a[i].s=0;
			}else{
				if(a[j].z!=a[i].z)ans+=a[j].s;
				a[i].s-=a[j].s;
				a[j].s=0;
			}
			
		}
		cout<<b<<endl;
		
	}
	cout<<ans;
	return 0;
}
