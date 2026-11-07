#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,e=1;
	cin n,m;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int w=0;w<e;w++){
	for(int i=w;i<n;i++){
		b[i]=a[i];
		for(int j=0;j<i;j++){
			if(b[j]==b[i]){
				for(j;j<i;j++){
					a[j]=0;
					n--;
				}
				a[j]=b[i];
				b[i]=0;
			}
		}
	}
	e++;
	if(n==w){
		w=e;
	}
    }
	fclose(stdin);
	fclose(stdout);
	return 0;
}
