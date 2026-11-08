#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n;
long long sum;
struct st{
	long long x;
	char c;
}a[200033];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
	}
	int l=1,r=n;
	while(l<r){
		if(a[l].x>a[r].x){
			if(a[l].c!=a[r].c){
				sum+=a[r].x;
			}
			a[l].x-=a[r].x;
			r--;
		}else if(a[l].x==a[r].x){
			if(a[l].c!=a[r].c){
				sum+=a[l].x;
			}
			l++;
			r--;
		}else{
			if(a[l].c!=a[r].c){
				sum+=a[l].x;
			}
			a[r].x-=a[l].x;
			l++;
		}
	}
	printf("%lld",sum);
	return 0;
}

