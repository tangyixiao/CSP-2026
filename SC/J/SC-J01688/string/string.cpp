#include<iostream>
using namespace std;
int n,a[200005],s,sum;
char c[2000005],b[200005],d[2000005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		s+=a[i];
	}
	int o=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
	        c[++o]=b[i];
		}
	}
	int h=0;
	for(int i=s;i>=1;i--){
		d[++h]=c[i];
	}
	for(int i=1;i<=s;i++){
		if(c[i]!=d[i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
} 