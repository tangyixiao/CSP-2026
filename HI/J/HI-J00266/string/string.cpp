#include<bits/stdc++.h>//lyzm
using namespace std;
long long sum,n=0;
int z=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string c[n];
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int x,y=0;
	if(n%2==1){
		int z=1;
	}
	else{
		int z=-1;
	}
	for(int i=n/2+z;i<n;i++){
		if(c[x]==c[n-y]){
			if(a[x]>a[n-y]){
				a[x]-=a[n-y];
				a[n-y]=0;
				y+=1;
			}
			else if(a[x]<a[n-y]){
				a[x]=0;
				a[n-y]-=a[x];
				x+=1;
			}
			else{
				a[x]=0;
				a[n-y]=0;
				x+=1;
				y+=1;
			}
		}
		else{
			if(a[x]>a[n-y]){
				sum+=a[n-y];
				a[x]-=a[n-y];
				a[n-y]=0;
				y+=1;
				
			}
			else if(a[x]<a[n-y]){
				sum+=a[x];
				a[x]=0;
				a[n-y]-=a[x];
				x+=1;
				
			}
			else{
				sum+=a[n-y];
				a[x]=0;
				a[n-y]=0;
				x+=1;
				y+=1;
				
			}
		}
	}
	cout<<sum;
	
	
	return 0;
}
