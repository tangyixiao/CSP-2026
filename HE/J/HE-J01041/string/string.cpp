#include<bits/stdc++.h>
using namespace std;
int n,v[100005],ans,xb1,xb2;
long long num; 
struct stu{
	int sum;
	char w;
}a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].sum>>a[i].w;
		num+=a[i].sum;
		v[i]=a[i].sum+v[i-1];
	}
	int z=(num+1)/2;
	if(num%2==1){
		for(int i=1;i<=n;i++){
			if(v[i]>=z&&v[i-1]<z){
				xb1=i;
				xb2=i;
			} 
		}
		int cha1=v[xb1]-z,cha2=z-v[xb1-1]-1;
		int cha=abs(cha1-cha2);
		if(cha1>cha2){
			a[xb1].sum=cha1-cha2;
			xb2++;
		}
		else if(cha1<cha2){
			a[xb1].sum=cha2-cha1;
			xb1--;
		}
		else{
			xb1--;
			xb2++;
		}
	}
	else{
		for(int i=1;i<=n;i++){
			if(v[i]>=z+1&&v[i-1]<z){
				xb1=i;
				xb2=i;
			} 
			else if(v[i-1]==z&&v[i]>=z+1){
				xb1=i-1;
				xb2=i;
			}
		}
	}
	int i=xb1,j=xb2;
	while(i>=1&&j<=n){
		if(a[i].w==a[j].w){
			if(a[i].sum>a[j].sum){
				a[i].sum-=a[j].sum;
				j++;
			}
			else if(a[i].sum<a[j].sum){
				a[j].sum-=a[i].sum;
				i--;
			}
			else{
				i--;
				j++;
			}
		}
		else{
			if(a[i].sum>a[j].sum){
					ans+=a[j].sum;
					j++;
					a[i].sum-=a[j].sum;
				}
			else if(a[i].sum<a[j].sum){
				ans+=a[i].sum;
				i--;
				a[j].sum-=a[i].sum;
			}
			else{
				ans+=a[i].sum;
				i--;
				j++;
			}
		}		
	}
	cout<<ans;
	return 0;
} 
