#include<bits/stdc++.h>
using namespace std;
char a[200005],z[100000005];
int l[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=0;
	cin>>n;
	int i=0;
	for(int p=0;p<n;p++){
		cin>>l[p]>>a[p];
		int o=l[p];
		while(o--){
			z[i]=a[p];
			i++;
		}
	}
	int c=0;
	for(int p=0;p<(i+1)/2;p++){
		if(z[p]!=z[i-1-p]){
			c++;
		}
	}
	cout<<c;
	return 0;
}
