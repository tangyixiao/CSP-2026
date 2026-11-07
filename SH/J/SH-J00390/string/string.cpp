#include<bits/stdc++.h>
using namespace std;

int n,flag;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long sum=0,ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	long long check=0;
	for(int i=1;i<=n;i++){
		check+=a[i];
		if(check > (sum/2)){
			long long x=check-(sum/2);
			if(x==a[i]) break;
			flag=1;
			for(int j=n;j>=i+1;j--){
				a[j+1]=a[j];
				c[j+1]=c[j];
			}
			a[i+1]=x;
			c[i+1]=c[i];
			a[i]-=x;
			break;
		}
	}
	int l=1,r=n;
	long long len1=a[1],len2=a[n],minn=0;
	if(flag){
		r=n+1;
		len2=a[n+1];
	}
	while(l<r){
		if(len1==len2){
			if(c[l]!=c[r]) ans+=len1-minn;
			minn=len1;
			l++;
			r--;
			len1+=a[l];
			len2+=a[r];
		}
		else if(len1>len2){
			if(c[l]!=c[r]) ans+=len2-minn;
			minn=len2;
			r--;
			len2+=a[r];
		}
		else{
			if(c[l]!=c[r]) ans+=len1-minn;
			minn=len1;
			l++;
			len1+=a[l];
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
