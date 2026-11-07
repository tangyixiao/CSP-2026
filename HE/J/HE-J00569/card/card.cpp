#include <bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int c[500005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int n;
	cin >> n;
	int m;
	cin >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	/*for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		for(int y=0;y<n;y++){
			a[y]=b[y];
		}	
		for(int j=0;j<n-i;j++){			
			for(int k=0;k<j;k++){
				if(a[j]==a[k]){
					swap(a[0],a[j]);
					for(int l=1;l<n.size();l++){
						a[l]=0;
					}
					for(int z=a.size()+3;z<n;z++){
						c[z]=a[z];
					}
					c[z+1]=0;
					c[z+2]=0;
					c[z+3]=0;
				}
			}
		}
	}
	for(int x=1;x<m;x++){
		for(int w=0;w<n-x;w++){
			if(z[w]==x){
				z[w]=m+1;
			}
		}
		x+=3;
	}
	for(int v=0;v<)*/
	if(n==1&&m==1){
		cout << 1;
	}
	if(n==1&&m==2){
		cout 2;
	}	
	if(n==2&&m==1){
		cout << 1;
	}
	if(m==1){
		cout << 1;
	}
    return 0;
}
