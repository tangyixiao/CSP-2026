#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string5.in","r",stdin);
	freopen("string5.out","w",stdout);
	int n;
	cin >> n;
	int a[n];//×Ö·ûÊý 
	char c[n];//×Ö·û
	int leng =0;
	int fy = 1;
	for(int i=0;i<n;i++){
		cin >> a[i] >> c[i];
	}
	bool k=1;
	for(int i=0;i<n;i++){
		if(a[i]/2*2!=a[i]){
			k=0;
		}
	}
	if(k){
		fy=fy*2;
	}
	for(int i=0;i<10;i++){
		bool k=1;
		for(int i=0;i<n;i++){
			if(a[i]/2*2!=a[i]){
				k=0;
			}
		}
		if(k){
			fy=fy*2;
		}
	} 
	for(int i=0;i<n;i++){
		leng+=a[i];
	}
	char str[leng];
	int ci=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			str[ci]=c[i];
			ci++;
		}
	}
	int ans=0;
	for(int i=0;i<(leng/2);i++){
		if(str[i]!=str[leng-1-i]){
			str[i]=str[leng-1-i];
			ans++;
		}
	}
	cout << ans*k;
} 
