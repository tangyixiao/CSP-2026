#include<iostream>  
using namespace std;
long long cnt=1;
long long f[100000015]={0};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;cin>>n;
	long long a[n+10]={0};char b[n+10]={0};
	for(long long i=1;i<=n;i++){
	cin>>a[i]>>b[i];
	for(int j=1;j<=a[i];j++){
		f[cnt]=b[i];
		cnt++;
	}
}
	if(n==1){
		cout<<0;
		return 0;
	}else if(n==2){
		if(b[1]==b[2]) {
		cout<<0;return 0;}else{
			if(a[1]>a[2])  cout<<a[2];
			else cout<<a[1];
		}return 0;
	}
	else{
	int w=0;
	for(int i=2;i<=n;i++){
		if(b[i]==b[i-1]) w++;
	}if(w==n-1){
		cout<<0;
		return 0;
	}long long l=0;
	for(int i=1;i<=n;i++){
		l+=a[i];
	}
	long long s=l/2;
	int e=0;
	for(int i=1;i<=s;i++){
		if(f[i]!=f[l-i+1]){
			e++;
		}
	}cout<<e;}
	return 0;
}
