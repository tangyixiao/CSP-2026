#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long sum=0;
	string c,s;
	char w;
	int n,L=0,a,d=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>w;
		L+=a;
		for(int j=0;j<a;j++){
			c[d]=w;
			d++;
		}
	}
	s=c;
	while(1){
		bool flag=true;
		for(int i=0;i<L;i++){
			if(c[i]!=c[L-i]){
				swap(c[i],c[i+1]);
			}
		}
		for(int i=0;i<L;i++){
			if(c[i]!=c[L-i]){
				flag=false;
			}
		}
		if(flag){
			break;
		}
	}
	for(int i=0;i<L;i++){
		if(c[i]!=s[i]){
			sum++;
		}
	}
	sum=sum/2;
	cout<<sum;
	return 0;
}
