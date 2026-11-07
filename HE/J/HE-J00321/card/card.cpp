#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define akcspj return 0
int n,m,a[550000],b[550000];
int c[550000],d[550000];
signed main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	if(n<=5000){
		
	} 
	for(int t=2;t<=n+1;t++){
		for(int i=1;i<=n;i++){
			d[i]=0;
		}
		for(int i=t-1;i<=n;i++){
			c[i]=a[i];
			//cout<<c[i];
		}
		int l=0;
		
		for(int i=t-1;i<=n;i++){
			bool f=false;
			int zb=i;
			
			for(int j=1;j<=i;j++){
				if(d[j]==c[i]){
					f=true;
					d[j]=0;
					zb=j;
				
				}
				if(f==true){
					d[j]=0;
					//cout<<j<<" "<<d[j];	
				}
			}
//			for(int j=1;j<=i;j++){
//				cout<<d[j]<<" ";
//			}
			//if(f==true) cout<<" uuu";
			//cout<<endl;
			//cout<<c[i]<<" "<<zb<<endl;
			d[zb]=c[i];
			l=zb;
			
		}
		for(int i=1;i<=l;i++){
			b[d[i]]++;
		//	cout<<d[i]<<" ";
		}
	//	cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" "; 
	}
	akcspj;
}

