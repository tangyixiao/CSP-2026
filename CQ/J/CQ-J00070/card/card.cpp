#include<bits/stdc++.h> 
using namespace std;
long long n,m[5000008],p=0,t,a[1145141],l[1145141],d;
int main(){
	freopen("card.in","r",stdin);
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>m[i];
	} 
	for(int i=1;i<=n;i++){
		for(int k=1;k<=p;k++){
			a[i]=0;
		}
		p=0;
		for(int j=i;j<=n;j++){
			for(int w=1;w<=p;w++)
			if(a[w]==m[j]){
				for(int q=w;q<=p;q++){
					p--;
					a[w]=0;
				}
			}
			p++;
			a[p]=m[j];
		}
		for(int i=1;i<=p;i++){
		if(a[i]!=0){
			l[a[i]]+=1;
		}
	}
	}
	for(int i=1;i<=t;i++){
		cout<<l[i]<<" ";
	}
	freopen("card.out","w",stdout);
	return 0;
}
