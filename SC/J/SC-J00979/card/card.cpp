#include<bits/stdc++.h>
using namespace std;
const int N=5e5+100;
int m,n;
int a[N],b[N],c[N];
bool f1(int a,int b){
	return a>b;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
		    b[j]=a[j];
			for(int p=1;p<j;p++){
				if(b[j]==b[p]){
					int d=b[j];
					for(int u=p;u<=j;u++){
						b[u]=0;
					}
					b[p]=d;
					break;
				}
				
			}
		}
		sort(b+1,b+1+n,f1);
		for(int j=1;j<=n;j++){
			if(b[j]!=0){
				c[b[j]]++;
				b[j]=0;
			}
			else {
				break;	
			}
		}		
	}	
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]==a[j])a[j]=0;	
		}	
		if(a[i]!=0){
			cout<<c[a[i]]<<" ";
		}	
	}
	return 0;
} 