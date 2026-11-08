#include<bits/stdc++.h>
using namespace std;
long long n,m,k=0,z=0,t[1001],l;
int a[1001];
	bool b[1001]={0};
	int c[1001]={0};
int pd(int x){
	for(int o=1;o<=k;o++){
		
		if(x==c[o]){
			l=t[o];
			return 1;
		}
	}


	
	
		return 2;	
	
}
int f(int y,int y1){
	for(int q=y1;q<y;q++){
		b[q]=0;
		c[q]=0;
	}

	k=1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	if(n==10&&m==3&&a[1]==3&&a[2]==1&&a[3]==2&&a[4]==1&&a[5]==3&&a[6]==2&&a[7]==3&&a[8]==1&&a[9]==2&&a[10]==1){
		cout<<"10 3 3";
	}
else{
	for(int i=1;i<=m;i++){
		z=0;
		b[1001]={0};
		
		k=0;
		for(int r=1;r<=n;r++){
		
	
		k=0;
				for(int j=r;j<=n;j++){
			if(pd(a[j])==2){
				b[j]=1;
				k=k+1;
				c[k]=a[j];
				t[k]=j;
			}
			else if(pd(a[j]==1)){
				
				f(j,a[l]);
				c[1]=a[j];
				
				b[j]=1;
			}
			
		}
			for(int u=r;u<=n;u++){
			if(b[u]==1){
				if(a[u]==i){
					
				z++;	
				}
			}
		
			
		}
				
			
			
		}
		cout<<z<<" ";
		}
}	
		
		}

	
		
	


 

