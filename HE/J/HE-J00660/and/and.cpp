#include <bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b){
	return a>b;
}
int awy(int a,int b){
	string w,m,c;
	for(int i=0;;i++){
		w+=a%2-'0';
		a/=2;
		if(a==1){
			break;
		}
	}
	for(int i=0;;i++){
		m+=b%2-'0';
		b/=2;
		if(b==1){
			break;
		}
	}
	for(int i=max(w.size(),m.size());i>=0;i--){
		if(w[i]==m[i]){
			c[i]='1';
		}else{
			c[i]='0';
		}
	}
}
int main(){
		freopen("and.in","r",stdin);
		freopen("and.out","w",stdout);
		long long n=0,arr[200010];
		cin>>n;
		for(int i=0;i<=n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n,cmp());
		
		
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
			awy(arr[i],arr[j]);
			}
		}
	
	
		return 0;
	}
