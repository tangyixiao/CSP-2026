#include<bits/stdc++.h>
using namespace std;
char a[90000100],x[90000100];
long long n,m[90000100],sum=1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i]>>x[i];
	}
	long long z=0;
	for(int i=1;i<=n;i++){
		z=__gcd(z,m[i]);	
		if(z==1) break;
	}
	if(z!=1){
		for(int i=1;i<=n;i++) m[i]=m[i]/z;
	}
	for(int i=1;i<=n;i++){
		for(int j=sum;j<=sum+m[i];j++){
			a[j]=x[i];
		}
		sum+=m[i];
		
	}
	int j=sum-1,q=0; 
	for(int i=1;i<=sum/2;i++){
		cout<<a[i]<<" "<<a[j]<<endl;
		if(a[i]!=a[j]) q++;
		j--;
	}
	cout<<q*z;
	return 0;
}//Trick||Treat!
