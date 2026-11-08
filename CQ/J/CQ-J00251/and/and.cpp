#include<bits/stdc++.h> 
using namespace std;

int n;
void ord(int i,long long a[]){
	if(i==n) return;
	int c;
	if(a[i]<a[i+1]){
		c=a[i];
		a[i]=a[i+1];
		a[i+1]=c;
	}
	ord(i+1,a);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int m,flag=0;
	cin>>m>>n;
	long long a[n];
	long long x,ans;
	fill(a,a+n,-1);
	for(int i=0;i<m;i++){
		cin>>x;
		if(flag<n){
			a[flag]=x;
			flag++;
		}
		else{
			for(int i=0;i<n;i++){
				ord(0,a);
				if(x>a[n-1]){
					a[n-1]=x;
				}
			}
		}
	}
	ans=a[0];
	for(int i=1;i<n;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}
