#include <bits/stdc++.h>
using namespace std;
//31 15 7
//011111 001111 000111
int a[200020];
bool c[32],d[32];
long long an(long long a,long long b){
	long long s=0,r=pow(2,31);
	for(int i=32;i>=1;i--){
		c[i]=a/r;
		a=a%r;
		d[i]=b/r;
		b=b%r;
		r/=2;
	}
	for(int i=32;i>=1;i--){
		if(c[i]==1&&d[i]==1){
			s+=pow(2,i-1);
		}
	}
	return s;
}
int main(){
	freopen("ans.in","r",stdin);
	freopen("ans.out","w",stdout);
	long long n,m,max_=0;
	bool flag=true;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				max_=max(max_,an(a[i],a[j]));
				//cout << max_ <<" ";
			}
		}cout <<max_;
	}if(m==3){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				max_=max(max_,an(a[i],an(a[j],a[j+1])));
				//cout << max_ <<" ";
			}
		}cout <<max_;
	}if(m==4){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				max_=max(max_,an(a[i],an(a[j],an(a[j+1],a[j+2]))));
				//cout << max_ <<" ";
			}
		}cout <<max_;
	}if(m==5){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				max_=max(max_,an(a[i],an(a[j],an(a[j+1],an(a[j+2],a[j+3])))));
				//cout << max_ <<" ";
			}
		}cout <<max_;
	}
	//cout <<endl <<an(3,12);

	return 0;
}
