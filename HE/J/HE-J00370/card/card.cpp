#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int arr[n];
	int a,b;
	int as=0,bs=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		a=arr[0];
		if(arr[i]!=a){
			b=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		int a=arr[i];
		int a1=0,b1=0;
		for(int j=i;j<n;j++){
			if(arr[j]==a){
				a1++;
				b1=0;
			}else{
				b1++;
				a1=0;
			}
		}
		if(a1!=0){
			as++;
		}if(b1!=0){
			bs++;
		}
	}
	if(a>b){
		int u=as;
		as=bs;
		bs=u;
	}
	cout<<as<<' '<<bs;
	return 0;
}
