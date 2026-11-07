#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    long long n;
    cin>>n;
    long long a[100001];
    char c[100001];
    long long total=0;
    int x=1,y=n;
    for(long long i=1;i<=n;i++)
    cin>>a[i]>>c[i];
    while(y>x){
    	if(a[x]>a[y]){
    		long long z=a[y]; 
    		if(c[x]!=c[y])
    			total+=z;
    		a[y]=0;
    		y-=1;
    		a[x]=a[x]-z;
		}
		else if(a[x]==a[y]){
    		long long z=a[y];
    		if(c[x]!=c[y])
    			total+=z;
    		a[y]=0;
    		y-=1;
    		a[x]=0;
    		x+=1;
		}
		else if(a[x]<a[y]){
    		long long z=a[x];
    		if(c[x]!=c[y])
    			total+=z;
    		a[y]-=z;
    		a[x]=0;
    		x+=1;
		}
	}
	cout<<total;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
