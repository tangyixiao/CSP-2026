#include<bits/stdc++.h>
using namespace std;
int n,m,a[500009];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		cout<<n;
	}else if(m==2){
		int a1=0,a2=0,b[200009]={};
		for(int i=1;i<=n;i++){
			if(a[i]==1)
				b[i]=b[i-1]++;
			else
				b[i]=b[i-1];
		}
		for(int i=1;i<=n;i++){
			int x=b[n]-b[i-1];//1
			int y=n-i+1-x;//2
			if((a[n]==2&&a[i]==1)||(a[n]==1&&a[i]==2)){
				a1++,a2++;
			}else if(a[n]==1&&a[i]==1){
				a1++;
			}else if(a[n]==2&&a[i]==2){
				a2++;
			}
		}
		cout<<a1<<" "<<a2;
	}else if(n<=500){
		int b[3009]={},c[3009]={},d[3009]={};
		for(int i=1;i<=n;i++){
			int cnt=0;
			memset(b,0,sizeof(b));
			memset(c,0,sizeof(c));
			for(int j=i;j<=n;j++){
				if(!c[a[j]]){
					b[++cnt]=a[j];
					c[a[j]]=cnt;
				}else{
					cnt=c[a[j]];
					for(int k=1;k<=m;k++)
						if(c[k]>cnt)
							c[k]=0;
				}
			} 
			for(int j=1;j<=cnt;j++){
				d[b[j]]++;
				//cout<<b[j]<<" ";
			}
		}
		for(int i=1;i<=m;i++) cout<<d[i]<<" ";
	}else if(n<=5000){
		int b[3009]={},c[3009]={},d[3009]={};
		for(int i=1;i<=n;i++){
			int cnt=0;
			memset(b,0,sizeof(b));
			memset(c,0,sizeof(c));
			for(int j=i;j<=n;j++){
				if(!c[a[j]]||c[a[j]]>cnt){
					b[++cnt]=a[j];
					c[a[j]]=cnt;
				}else{
					cnt=c[a[j]];
				}
			}
			for(int j=1;j<=cnt;j++){
				d[b[j]]++;
				//cout<<b[j]<<" ";
			}
			//cout<<"\n";
		} 
		for(int i=1;i<=m;i++) cout<<d[i]<<" ";
	}
	return 0;
}
