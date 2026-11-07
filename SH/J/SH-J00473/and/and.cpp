#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	sort(a+1,a+n+1,cmp);
	int start=1;
	while(1){
		bool ok=true;
		int sum=a[start];
		for(int i=start+1;i<=start+m-1;i++){
			if(int(sum&a[i])==0){
				ok=false;
				start=i;
				break;
			}else{
				sum&=a[i];
			}
		}
		if(start+m-1>n){
			cout<<0;
			break;
		}
		if(ok){
			cout<<sum;
			break;
		}
	}
	return 0;
}
