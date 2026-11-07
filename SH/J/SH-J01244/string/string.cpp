#include<bits/stdc++.h>
using namespace std;
const long long maxn = 1000000001;
int gcd(int a,int b){
	if(a%b==0) return b;
	gcd(b,a%b);
}
long long cnt;
char m[maxn];
long long a[200001];
char b[200001];
long long gcd_num;
long long size;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	cin>>a[1]>>b[1];
	gcd_num = a[1];
	for(int i = 2;i<=n;i++){
		cin>>a[i]>>b[i];
		gcd_num = gcd(gcd_num,a[i]);
	}
	for(int i = 1;i<=n;i++){
		a[i]/=gcd_num;
		size+=a[i];
	}
	long long temp = 0;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=a[i];j++){
			m[temp+j] = b[i];
		}
		temp+=a[i];
	}
	for(long long i = 1;i<=temp/2;i++){
		if(m[i]!=m[temp-i+1]) cnt++;
	}
	cout<<cnt*gcd_num;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
