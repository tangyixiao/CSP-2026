#include<bits/stdc++.h>
using namespace std;
const int N=1e8+10;
long long n,a[N],m,w,w1;
string q,s,b,q1,q2,q3;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","r",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
	cin>>a[i]>>s[i];
	}
	for(int i=1;i<=n/2;i++){
	if(s[i]!=s[n-m]){
	if(a[i]<a[n-m]){
	if(s[i+1]!=s[n-m]){
	w+=a[n-m];
    a[i+1]-=(a[n-m]-a[i]);
	}
	else{
	w+=a[i];
	a[i+1]-=a[i];
	}
	}
	if(a[i]>a[n-m]){
	if(s[n-m-1]!=s[i]){
	w+=a[i];
	a[n-m-1]-=(a[i]-a[n-m]);
	}
	else{
	w+=a[n-m];
	a[n-m-1]-=a[n-m];
	}
	}
	}
	else{
	if(a[i]>a[n-m]){
	if(s[n-m-1]!=s[i]){
	w+=(a[i]-a[n-m-1]);
	a[i]-=(a[i]-a[n-m]);
	}
	else{
	w+=a[i];
	}
	}
	}
	m++;
	}
	cout<<w;
return 0;
}
