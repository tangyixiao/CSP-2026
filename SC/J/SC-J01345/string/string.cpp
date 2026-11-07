#include<bits/stdc++.h> 
using namespace std;
long long n,a[200005],sum,cnt=1,m,num,c[200005],j,mm;
char b[200005],d[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[cnt]>>b[cnt];
		m+=a[cnt];
		if(b[cnt]==b[cnt-1]){
			a[cnt-1]+=a[cnt];
		}else cnt++;
	}
	cnt--;
	if(sum%2==0){
		bool l=0;
		for(int i=1;i<=cnt;i++){
			if(num+a[i]>=sum/2&&l==0){
				c[i]=sum/2-num;
				d[i]=b[i];
				c[i+1]=a[i]+num-sum/2;
				d[i+1]=b[i];
				l=1;
			}else if(l==0){
				c[i]=a[i];
				d[i]=b[i];
			}else {
				c[i+1]=a[i];
				d[i+1]=b[i];
			}
			num+=a[i];
		}
	}else{
		bool l=0;
		for(int i=1;i<=cnt;i++){
			if(num+a[i]>sum/2&&l==0){
				c[i]=sum/2-num;
				d[i]=b[i];
				c[i+1]=a[i]+num-sum/2-1;
				d[i+1]=b[i];
				l=1;
			}else if(l==0){
				c[i]=a[i];
				d[i]=b[i];
			}else {
				c[i+1]=a[i];
				d[i+1]=b[i];
			}
			num+=a[i];
		}
	}
	j=cnt+1;
	for(long long i=1;i<=j;){
		if(c[i]>c[j]){
			if(d[i]!=d[j]){
				mm+=c[j];
			}
			c[i]-=c[j];
			j--;
		}else{
			if(d[i]!=d[j]){
				mm+=c[i];
			}
			c[j]-=c[i];
			i++;
		}
	}
	cout<<mm;
	return 0;
}