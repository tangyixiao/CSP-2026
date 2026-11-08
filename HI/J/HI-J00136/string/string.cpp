#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int m;
	char s;
	int x,y;
	for(int i=0;i<n;i++){
		cin>>m;
		cin>>s;
		a[i]=s;
		b[i]=m;
	}
	int cnt=0;
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]!=a[i+1]){
			cnt++;
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]!=b[i+1]){
			sum++;
		}
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	else if(cnt==1){
		cout<<0;
		return 0;
	}
	else if(n==2&&sum!=1){
		cout<<n;
		return 0;
	}
	else if(n==2&&sum==1){
		cout<<b[0];
		return 0;
	}
	return 0;
}
