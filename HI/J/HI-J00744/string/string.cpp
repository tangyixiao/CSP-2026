#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a,k=1,sum=0;
	char b;
	string x;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			x[k]=b;
			k++;
		}
	}
	for(int i=1;i<=k/2;i++){
		if(x[i]!=x[k-i])	sum++;
	}
	cout<<sum;
	/return 0;
}
