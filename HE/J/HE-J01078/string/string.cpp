#include<bits\stdc++.h> 
using namespace std;

long long a[200005];
char c[200005];
string b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	if(n==1){
		cin >> a[1] >> c[1]; 
		cout << 0;
		return 0;
	}
	
	
	for(long long i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	if(n==2){
		if(c[1]==c[2]){
			cout << 0;
		}
		else{
			cout << min(a[1],a[2]);
		}
		return 0;
	}
	
	
	long long s=0;char x=c[1];
	for(long long i=1;i<=n;i++){
		if(c[i]==x) s++;
	}
	if(s==n){
		cout << 0;
		return 0;
	}
	
	
	long long p=0,sum=0;
	for(long long i=1;i<=n;i++){
		p+=a[i];
		for(long long j=1;j<=a[i];j++)
			b=b+c[i];
	}
	if(p%2==0){
		long long l=p/2-1,r=p/2;
		for(;l>=0;l-=1,r+=1){
			if(b[l]!=b[r]){
				sum++;
			}
		}
	}
	if(p%2!=0){
		long long l=p/2-1,r=p/2+1;
		for(;l>=0;l-=1,r+=1){
			if(b[l]!=b[r]){
				sum++;
			}
		}
	}
	cout << sum;
	//bool jo=0;
	//for(long long i=1;i<=n;i++){
	//	if((a[i]+jo)%2==0) jo=0;
	//	else jo=1;
	//}
	//
	//if(jo==0){
	//	
	//}
	return 0;
}
