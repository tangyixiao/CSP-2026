#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
int n,m;
long long a[200005],ans[20000],max=0, k=0;
cin>>n>>m;
if(m==1){
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(max<=x){
			max=x;
		}
	
	}
	cout<<max;
	}else if(m==2){
			for(int i=0;i<n;i++){
		int x;
		cin>>x;}
	for(int i=0;i<(n+1)*2-2;i++){
		for(int j=n-1;j>=i;j--){
			k=ans[i]&&ans[j];
			if(max<=k){
				max=k;
			}
		}
	}	
	
		cout<<max;
		
		
	}else{
			for(int i=0;i<n;i++){
		int x;
		cin>>x;
	
	}
	sort(a,a+n);
	cout<<a[0];

}
	

return 0;
} 
