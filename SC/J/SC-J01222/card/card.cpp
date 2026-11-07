#include<bits/stdc++.h>
using namespace std;
int n,m,qq,t;
int x[500005],tky[3],y[500005],s[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	int f=n;	
	for(int i=0;i<n;i++){
		cin>>x[i];
		y[i]=x[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}else if(m==2){
		qq=x[n-1];
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(x[i]>x[j]){
					t=x[i];
					x[i]=x[j];
					x[j]=t; 
				}
			}
		}
		int a1=x[0],a2=x[n-1];
		for(int i=0;i<n;i++){
			if(x[i]==a1){
				tky[0]+=1;
			}else{
				tky[1]+=1;
			}
		}if(qq==a1){
			cout<<n<<' '<<tky[1];
		}else{
			cout<<tky[0]<<' '<<n;
		}
		return 0;
	}
for(int i=0;i<n;i++){
		for(int j=i;j<f;i++){
			for(int k=i;k<j;k++){
				if(y[j]==y[k]){
					for(int kk=i;kk<f;kk++){
						y[kk]=y[kk-k+j];
					}
					f=f-j+k;
				}
			}
		}
		for(int j=0;j<f;j++){
			s[y[j]]+=1;
		}
		for(int j=0;j<n;j++){
			y[i]=x[i];
		}
	}for(int i=0;i<n;i++){
		cout<<s[i]<<' ';
	}
	return 0;
} 