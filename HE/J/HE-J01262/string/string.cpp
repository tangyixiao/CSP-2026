#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,f=1,o=0;
	cin>>n;
	int c[n+1];
	char d[n+1];
	for(int i=0;i<n;i++){
		cin>>c[i];
		cin>>d[i];
	}
	for(int i=0;i<n;i++){
		f=f*c[i];
	}
	char a[f];
	int b=f;
	for(int i=0;i<n;i++){
		for(int j=o;j<c[i]+o+1;j++){
			a[j]=d[i];
		}
		o=o+c[i];
	}
	f=0;
	for(int i=0;i<b/2;i++){
		if(a[i] != a[b-i-1]){
			f++;
		}
	}
	cout<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
