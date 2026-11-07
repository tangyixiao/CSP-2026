#include<bits/stdc++.h>
using namespace std;
int n,a[200010];
char s[10000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int q=0,r=0;
	a[0]=0;
	for(int i=1;i<=n;i++){
		char c;
		cin>>a[i]>>c;
		q+=a[i-1];
		for(int j=1;j<=a[i];j++){
			s[q+j-1]=c;
		}
	}
	int l=q+a[n];
	for(int i=0;i<l/2;i++){
		if(s[i]==s[l-i-1]){
			continue;
		}else{
			r++;
		}
	}cout<<r;
	return 0;
}