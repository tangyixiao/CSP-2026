#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,max=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum=a[i]&a[j];
			if(sum>max){
				max=sum;
			}
		}
	}
	cout<<max;
	return 0;
} 
