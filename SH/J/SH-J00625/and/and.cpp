#include <iostream>
using namespace std;
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	unsigned long long a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	unsigned long long max1=0;
	
	if(m==1){
		for (int i=0;i<n;i++)max1=max(max1,a[i]);
		cout<<max1;
		return 0;
	}
	max1=a[0];
	if(m==n){
		for (int i=1;i<n;i++)max1=max1&a[i];
		cout<<max1;
		return 0;
	}
	if(m==2){
		for (int i=0;i<n;i++){
			for (int j=i+1;j<n;j++){
				max1=max(a[i]&a[j],max1);
			}
		}
		cout<<max1;
	}
	
}
