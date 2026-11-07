#include<bits/stdc++.h>
using namespace std;
int n,a[200005],d1,d2;
char s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	int c=1;
	int b=0;
	int j=n;
	if(n%2==1){
		for(int i=1;i<=n/2+1;i++){
			if(a[i]!=a[j]||s[i]!=s[j]){
				b++;
			}
			j--;
		}
	}else{
		for(int i=1;i<=n/2;i++){
			if(a[i]!=a[j]||s[i]!=s[j]){
				b++;
			}
			j--;
		}
	}
	if(b==0){
		cout<<0;
		return 0;
	}
	for(int i=1;i<n;i++){
		if(s[1]==s[i+1]){
			c+=1;
		}
	}
	if(c==n){
		cout<<0;
		return 0;
	} 
	for(int i=1;i<=c;i++){
		d1+=a[i];
	}
	for(int i=c+1;i<=n;i++){
		d2+=a[i];
	}
	if(d1>d2){
		cout<<d2;
	}else{
		cout<<d1;
	}
	return 0;
} 
