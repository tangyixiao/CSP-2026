#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200005]={},c=0;
	char m[200005]={};
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>m[i];
	}
	long long l=0,f=n-1;
	long long l1=0,f1=0;
	while(true){
		
		if(l>=f){
			break;
		}
		if(m[l]!=m[f]){
			long long p=min((a[l]-l1),(a[f]-f1));
			c+=p;
			l1+=p;
			f1+=p;
		}else{
			long long p=min((a[l]-l1),(a[f]-f1));
			l1+=p;
			f1+=p;
		}
		if(l1==a[l]){
			l1=0;
			l++;
		}
		if(f1==a[f]){
			f1=0;
			f--;
		}
	}
	cout<<c;
	
	fclose(stdin);
	fclose(stdout);
}
