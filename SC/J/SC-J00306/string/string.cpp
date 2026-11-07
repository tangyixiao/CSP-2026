#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a[200005];
	char c[200005];//244599
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int i1=1;
	int i2=n;
	long long ans=0;
	while(i1<i2){
		if(c[i1]!=c[i2]){
			ans+=min(a[i1],a[i2]);
		}
		if(a[i1]>a[i2]){
			a[i1]-=a[i2];
			a[i2]=0;
			i2--;		
		}
		else if(a[i1]<a[i2]){
			a[i2]-=a[i1];
			a[i1]=0;		
			i1++;
		} 
		else{
			a[i1]=0;
			a[i2]=0;
			i1++;
			i2--;
		}	
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout); 
	return 0;
} 