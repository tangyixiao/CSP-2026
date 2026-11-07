#include<bits/stdc++.h>
using namespace std;

int a[1000000]={0};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int i , j;
	int n , m;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]<a[j+1]){
				a[j]+=a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	cout<<a[m-1];
}
