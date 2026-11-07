#include<bits/stdc++.h>
using namespace std;
int n,m,l[1000000],a[1000000],s[1000000]={0},p[1000000]={0},b=0; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>l[i];
		a[i]=l[i];
		p[l[i]]++;
	}
	for(int i=1;i<=n;i++){
		int x=n;
		for(int j=i;j<=n;j++){
			int y=x;
			for(int k=i;k<=x;k++){
				if(a[k]==l[j]){
					for(int q=k+1;q<=x;q++){
						a[q]=0;
					}
					x=k;
				}
				break;
			}
			if(x==y){
				a[x+1]=l[j];
				x++;
			}
		}
		for(int j=i;j<=x;j++){
			s[j]++;
		}
	}
	for(int i=1;i;i++){
		if(p[i]>0){
			cout<<s[i];
			b++;
		}
		if(b==m){
			break;
		}
	}
	return 0;
}
