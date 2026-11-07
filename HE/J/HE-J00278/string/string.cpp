#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long len,d,e,f,g;
	long long sum=0,ans=0;
	string s;
	int a[100005],c[50];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	len=s.size();
	if(len%2==0){
		d=len/2;
		
	}else{
		d=len/2;
}
	f=0;
	g=len-1;
	for(int i=0;i<len;i++){
		if(d>=i){
			e=d-i;
		}else{
			e=i-d;
		}
		if(len%2==0){
		if(s[i]!=s[e+d]){
			sum++;
		}
	}else{
		if(s[f]!=s[g]){
			sum++;
		}
		f=f+1;
		g=g-1;
	}
}
		cout<<sum/2;
	return 0;
}
