//#include <iostream>
#include <fstream>

using namespace std;

long long a[200005],t[200005];
long long maxx=-1;

int main()
{
	ifstream cin("and.in");
	ofstream cout("and.out");
	
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>maxx) maxx=a[i];
		}
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>maxx) maxx=a[i]&a[j];
			}
		}
	}
	else if(m==n){
		for(int i=1;i<n;i++){
			a[i+1]=a[i]&a[i+1];
		}
		cout<<a[n];
		return 0;
	}
	else if(m==(n-1)){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				else if(i<j) t[j-1] = a[j];
				else t[j]=a[j];
			}
		
			for(int i=1;i<n-1;i++){
				t[i+1]=t[i]&t[i+1];
			}
			if(t[n-1]>maxx) maxx=t[n-1];
		}
	}
	
	cout<<maxx;
	
	return 0;
}