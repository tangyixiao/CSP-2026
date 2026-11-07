#include <bits/stdc++.h>
using namespace std;int n,m;int b[200001],l[100000]={0};int y=-1;
int main(){bool bo=0;int u=0;int h=-1;int ii,jj;int g=-1;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>b[i];
		l[b[i]]++;
	}for(int i=0;i<10000;i++){
		if(l[i]>=m&&(i|i>y)){
			bo=1;y=i;
		}
	}if(bo==1){
		cout<<y;
	}else{
		if(m==n){
			for(int i=0;i<n;i++){
				if(i==n-1){
					cout<<u;
				}else{
				u+=(b[i]&b[i+1]);
			}
			}
		}else if(m==1){
			sort(b,b+n);
			cout<<b[n-1];
		}else if(m==2){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(b[i]|b[j]>h&&i!=j){
						h=b[i]|b[j];
					}
				}
			}
		}else{
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(b[i]|b[j]>h&&i!=j){
						h=b[i]|b[j];b[i]=0;b[j]=0;
					}
				}//m=2
			}for(int j=0;j<(m);j++){
			for(int i=0;i<n;i++){	
				if(b[i]|h>g){
						h=h|b[i];b[i]=0;
					}
			}
		
	}cout<<h;}}
	fclose(stdin);
	fclose(stdout);
	return 0; 
} 
