#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[500005],d[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		//cout<<endl;
		long long c[30005]={0},b[30005]={0};
		for(int j=i;j<=n;j++){
			
		   c[a[j]]+=1;
		   if(c[a[j]]==2){
		   	for(int k=b[a[j]];k<j;k++){
		   		c[a[k]]=0;
		    }
		    
		    //cout<<b[a[j]]<<"a";
		    //cout<<c[a[b[a[j]]]]<<"a";
		    c[a[j]]=1;
		   }
		   
		   b[a[j]]=j;
		   
		}
		
		for(int j=1;j<=m;j++){
			//cout<<c[j]<<" ";
			
				d[j]+=c[j];
			
		}
	}
	//cout<<endl;
	//d[m]++;
	for(int j=1;j<=m;j++){
			
				cout<<d[j]<<" ";
			
		}
		
	return 0;
}
/*/
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
/*/
