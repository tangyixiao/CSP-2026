#include<iostream> 
using namespace std;
int n,sum;
int a[200001];
char c[200001],f[1000000000];
long b,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		b+=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=a[i];j!=0;j--){
			f[j]=c[i];
		}
	}
	d=b;
	b/=2;	
	for(int i=1;i<=b;i++){
		if(f[i]!=f[d-i+1]){
			f[d-i+1]=f[i];
			sum+=1;
		}			
	}
	cout<<sum;	
	return 0;	
}