#include<bits/stdc++.h>
using namespace std;
long long a[1000005],b[1000005]={0},c[1000005]={0},m,n,r=0;
void bpush(int x){
	r++;
	b[r]=x;
}
void bpop(){
	r--;
}
bool bcheck(int x){
	for(int i=1;i<=r;i++){
		if(b[i]==x)return true;
	}
	return false;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(bcheck(a[j])){
				while(a[j]!=b[r]){
					bpop();
				} 
			}else{
				bpush(a[j]);
			}
		}
		for(int j=1;j<=r;j++){
			c[b[j]]+=1;
		}
		r=0;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
} 
