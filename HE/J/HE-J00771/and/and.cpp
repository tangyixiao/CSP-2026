#include<bits/stdc++.h>
using namespace std;
int n,m,mi=50,ma;
int w[32],w2[32],a1[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a1[i];
		int a=a1[i];
		int j=0;
		while(j<31){
			int x=pow(2,30-j);
				
			if(a>=x){
				a-=x;
				w[j-1]++;	
				mi=min(mi,j);
			}
			j++;
			
		}
	}
	for(int i=1;i<=n;i++){
		int j=mi,x=pow(2,30);
		while(1){
			if(a1[i]<x){
				w2[j]++;
				break;
			}else{
				a1[i]-=x;
			}
			j++;
			x/=2;
		}
	}
	int k=pow(2,30);
	for(int i=0;i<30;i++){
		if(w[i]>=m){
			ma+=pow(2,30-i-1);
			for(int j=i+1;j<=30;j++){
				w[j]-=w2[i];
			}
		}
	}
	cout<<ma<<endl;

	return 0;
}
