#include <bits/stdc++.h>
using namespace std;
const int N=1e+6;
int n;
int a[N];
char c[N];
int s=0,s1;
int b=0;
char d;
bool t=false;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n%2==0){
		s1=n/2;
		b=a[s1];
		d=c[s1];
	}
	else{
		s1=n/2+1;
		b=a[s1-1];
		d=c[s1-1];
	}
	for(int i=1;i<=n/2;i++){
		if(t==false){
			if(d==c[s1+i]){
				if(b>a[s1+i]){
					b-=a[s1+i];
				}
				else if(b<a[s1+i]){
					b=a[s1+i]-b;
					t=true;
				}
				else{
					b=a[s1-i];
					d=c[s1-i];
				}
			}
			else{
				if(b>a[s1+i]){
					s+=a[s1+i];
					b-=a[s1+i];
				}
				else if(b<a[s1+i]){
					s+=b;
					b=a[s1+i]-b;
					t=true;
					d=a[s1+i];
				}
				else{
					s+=b;
					b=a[s1-i];
					d=c[s1-i];
				}
			}
		}
		if(t=true){
			if(d==c[s1-i]){
				if(b>a[s1-i]){
					b-=a[s1-i];
				}
				else if(b<a[s1-i]){
					b=a[s1-i]-b;
					t=true;
				}
				else{
					b=a[s1+i];
					d=c[s1+i];
				}
			}
			else{
				if(b>a[s1-i]){
					s+=a[s1-i];
					b-=a[s1-i];
				}
				else if(b<a[s1-i]){
					s+=b;
					b=a[s1-i]-b;
					t=true;
					d=a[s1-i];
				}
				else{
					s+=b;
					b=a[s1+i];
					d=c[s1+i];
				}
			}
		}
	}
	cout<<s;
	return 0;
}
