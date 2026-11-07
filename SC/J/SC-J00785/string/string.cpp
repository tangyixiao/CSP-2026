#include<bits/stdc++.h>
using namespace std;
long long a[200005]={0};
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[i]+=a[i-1]+x;
		cin>>b[i];
	}
	int l=0,r=n;
	long long m=a[n]/2;
	long long j=a[n],i=1;
	long long t=0;
	long long ic=0,jc=0;
	while(!(r==l||l+1==r)){
		if(b[l+1]!=b[r])
		{
			ic=a[l+1]-i+1;
			jc=j-a[r-1];
			if(ic<=jc){
				i+=ic;
				j-=ic;
				t+=ic;
			}
			else{
				i+=jc;
				j-=jc;
				t+=jc;
			}
		}
		else{
			ic=a[l+1]-i+1;
			jc=j-a[r-1];
			if(ic<=jc){
				i+=ic;
				j-=ic;
			}
			else{
				i+=jc;
				j-=jc;
			}
		}
		if(!(a[l]<i&&i<=a[l+1])){
			l++;
		}
		if(!(a[r]>=j&&j>a[r-1])){
			r--;
		}
	}
	cout<<t<<endl;
	return 0;
} 