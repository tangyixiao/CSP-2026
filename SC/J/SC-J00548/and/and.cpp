#include<bits/stdc++.h>
using namespace std;
long long a,b,n[100001],p;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>n[i];
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(n[i]&n[j]>p&&i!=j) p=n[i]&n[j];
		}
	}
	cout<<p;
} 