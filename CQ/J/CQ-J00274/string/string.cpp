#include<bits/stdc++.h>
using namespace std;
// aabbccag
// gaccbbaa
// aabaa
// 01234 - 5
// 32 24 1-8
// 24 8 3-0
long long a[200020];
char b[200020];
string re(string s){
	string m;
	long long si=s.size();
	for(int i=si-1;i>=0;i--){
		m+=s[i];
	}return m;
}

long long f(string c){
	long long m=c.size(),ne=0 ;
	for(long long i=0;i<m/2;i++){
		if(c[i]!=c[m-1-i]){
			ne++;
			//cout <<" "<<i<<" ";
		}
	}return ne;
}

long long gcd(long long a,long long b){
	long long c=a%b;
	while(c!=0){
		c=a%b;
		a=b;
		b=c;
	}return b;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,max_=1;
	string s;
	cin >> n;
	cin >> a[1] >> b[1];
	for(int i=2;i<=n;i++){
		cin >> a[i] >> b[i];
		max_=max(max_,gcd(a[i-1],a[i]));
	}
	if(max_==1){
		long long sum=0;
		for(int i=1;i<=n;i++)  sum+=a[i];
		cout << sum/2;
	}
	for(int i=1;i<=n;i++){
		for(long long j=1;j<=a[i]/max_;j++){	
			s+=b[i];
		}
	}
	if(re(s)==s){
		cout << 0;
		return 0;
	}else{
		cout << f(s)*max_;
	}
	return 0;
} 
