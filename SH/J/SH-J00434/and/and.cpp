#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,b,c=0,m=0,m2=0,m3=0;
	long long k[50005];
	cin>>a>>b;

	for(long long i =0 ; i<a ; i++){
		cin>>c;
		k[i]=c;
		m=max(m,c);
	}
	if (b==1 or b==(a-1)) cout<<m;
	if (b==2) {
		for(long long i =0 ; i<a ; i++){
			for(long long j =i+1 ; j<a ; j++){
				m2 =k[i] && k[j];
				m3=max(m2,m3);
			}
		}
		cout<<m3;
	}
	if (b==3) {
		for(long long i =0 ; i<a ; i++){
			for(long long j =i+1 ; j<a ; j++){
				for(long long z =j+1 ; z<a ; z++){
				m2 =k[i] && k[j] && k[z];
				m3=max(m2,m3);
			}
			}
		}
		cout<<m3;
	}
	if (b==4) {
		for(long long i =0 ; i<a ; i++){
			for(long long j =i+1 ; j<a ; j++){
				for(long long z =i+1 ; z<a ; z++){
					for(long long o =i+1 ; o<a ; o++){
				m2 =k[i] && k[j] && k[z] && k[o];
				m3=max(m2,m3);
			}
		}
			}
		}
		cout<<m3;
	}
	return 0;
}
