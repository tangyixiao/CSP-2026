#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],h,h1,h2,q,cnt,z; 
char b[100005],s[2145443454];
int main(){
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		h+=a[i];
		for(long long j=1;j<=a[i];j++){
			q++;
			s[q]=b[i];
		}
	}
	if(h%2==0){
		h1=h/2;
		h2=h1+1;
	}else{
		h1=(h+1)/2;
		h2=h1;
	}
	z=h1;
	for(long long i=1;i<=z;i++){
		if(s[h1]!=s[h2])cnt++;
		h1--;
		h2++;
	}
	cout<<cnt;
	return 0;
}
