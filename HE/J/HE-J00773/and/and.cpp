#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],max1=INT_MIN;
bool cmp(long long x,long long y){
	return x>y;
}
long long l(long long x,long long y){
	return x&y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1]<<endl;
		return 0;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				long long y=l(a[i],a[j]);
				if(y>max1){
					max1=y;
				}
			}		
		}cout<<max1<<endl;
		return 0;
	}else if(m>2){
		long long x=l(a[1],a[2]);
		for(int i=3;i<=m;i++){
			max1=max(x,l(x,a[i]));
		}	
		cout<<max1<<endl;
		return 0;
	}
	
	return 0;
} 
