#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll nn,n,l,ans;
ll min_op,max_op;
ll op[200005],i,j;
char os[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int ii=0;ii<n;ii++){
		cin>>op[ii]>>os[ii];
	}
	i=0;
	j=n-1;
	while(i<j){
		min_op=min(op[i],op[j]);  
		op[i]-=min_op;op[j]-=min_op;  
		if(os[i]!=os[j]){
			ans+=min_op;
		} 
		if(op[i]==0){
			i++;
		}
		if(op[j]==0){
			j--;
		}  
		
	} 
	cout<<ans;
	return 0;
}
