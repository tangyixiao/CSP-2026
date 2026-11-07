#include<bits/stdc++.h>
using namespace std;
int n,m,tong[200005][41],maxn=0,ans;
void change(int n,int pos){
	int a[40],i=1;
	
	while(n>0){
		a[i]=n%2;
		n/=2;
		i++;
	}
	for(int j=1;j<=i;j++){
		tong[pos][j]=a[i-j+1];
	}
	tong[pos][i+1]=9;
	tong[pos][41]=i;
	if(i>maxn){
		maxn=i;
	}
	
}
int main(){
	freopen("and2.in","r",stdin);
	freopen("and2.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		change(x,i);
	}
	
	for(int i=2;i<=maxn;i++){
		int cnt=0;
		for(int j=1;j<=n;j++){
			
			if(tong[j][i]==1&&tong[j][41]>=maxn-i+2){
				
				cnt++;
			}
			else{
				tong[j][41]=-10;
			}
		}
		
		if(cnt>=m){
			
			int lin=1;
			for(int x=1;x<=(maxn-i);x++){
				lin*=2;
			}
			ans+=lin;
		}
		
	}
	cout<<ans;
	return 0;
}
