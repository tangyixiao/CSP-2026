#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,b=0;
	cin>>n>>m;
	int a[310001]={},s[100000]={},zhuo[100000]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=1;k<=b;k++){
				if(zhuo[k]==a[j]){
					b=k-1;
				}
			}
			b++;
			zhuo[b]=a[j];
		}
		for(int j=1;j<=b;j++){
			s[zhuo[j]]++;
		}
		b=0;
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}
