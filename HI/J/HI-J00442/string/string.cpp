#include<bits/stdc++.h>
using namespace std;
struct a{
	long long geshu;
	char zifu;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long zh=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].geshu>>a[i].zifu;
		zh+=a[i].geshu;
	}
	long long sum=0;
	long long max1=0;
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=1;j<=n;j++){
			if(a[i].zifu==a[j].zifu){
				sum+=a[j].geshu;
			}
		}max1=max(max1,sum);
	}
	cout<<zh-max1;
	return 0;
} 
