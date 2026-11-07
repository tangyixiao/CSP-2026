#include<bits/stdc++.h>
using namespace std;
int a[100000];
char b[1000];
char c[1000000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int d=0;
	for(int i=0;i<n;i++){
		while(a[i]--){
			c[d]=b[i];
			d++;
		}
	}
	int cnt=0;
	for(int i=0;i<d;i++){
		cout<<c[i];
	}
	if(d%2==0){
		for(int i=0;i<d/2;i++){
            if(c[i]!=c[d-i]){
            	cnt++;
			}
	    }	
	}else if(d%2==1){
		for(int i=0;i<d/2;i++){
            if(c[i]!=c[d-i-1]){
            	cnt++;
			}
	    }
	}
	cout<<cnt;
	return 0;
}
