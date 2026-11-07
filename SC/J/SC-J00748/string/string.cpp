#include<bits/stdc++.h>
using namespace std;
long long a[200001],b[200001];
char c[200001],d[200001]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long h=0;
	long long x;
	int z=0; 
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		h+=a[i];
	}
	x=a[1]; 
	for(int i=1;i<=n;i++){
		if(a[i]!=x){
			z=1;
		}
	}
	if(z==0){
		int tot=0;
		for(int i=1,j=n;i<=j;i++,j--){
			if(c[i]!=c[j]){
				tot++;
			}
		}
		cout<<tot*a[1];
		return 0;
	}	
	long long s=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s++;
		}
		b[i]=s;
	} 
	long long tot=0; 
	for(int i=1,j=h;i<=j;i++,j--){
		for(int x1=1;x1<=n;x1++){
			if(i<=b[x1]){
				d[i]=c[x1];
				break; 
			} 
		}
		for(int x2=1;x2<=n;x2++){
			if(j<=b[x2]){
				d[j]=c[x2];
				break; 
			} 
		}
		if(d[i]!=d[j]){
			tot++;
		}
	}
	cout<<tot;
	return 0; 
}