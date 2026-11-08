#include<bits/stdc++.h>
using namespace std;
long long len=0;
struct node{
	char c;
	long long m;
};
node a[200010],b[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i].m>>a[i].c;
		len+=a[i].m;
	}
	bool f=0;
	if(len%2==1){
		f=1;
	}
	len/=2;
	long long sum=0,l=0;
	for(long long i=1;i<=n;i++){
		sum+=a[i].m;
		if(sum>len&&f==1){
			sum-=len;
			l=i;
			a[i].m-=sum;
			b[n-l+1].m=sum-1;
			b[n-l+1].c=a[i].c;
			break;
		}else if(sum>=len&&f==0){
			sum-=len;
			l=i;
			a[i].m-=sum;
			b[n-l+1].m=sum;
			b[n-l+1].c=a[i].c;
			break;
		}
	}
	for(long long i=1;i<=n-l;i++){
		b[i].c=a[n-i+1].c;
		b[i].m=a[n-i+1].m;
	}
	long long j,k=1;
	long long num=0;
	while(j+k<=n){
		if(a[j].c!=b[k].c){
			if(a[j].m<b[k].m){
				num+=b[k].m-a[j].m;
				b[k].m-=a[j].m;
				a[j].m=0;
				j++;
			}else if(a[j].m>b[k].m){
				num+=a[j].m-b[k].m;
				a[j].m-=b[k].m;
				b[k].m=0;
				k++;
			}else if(a[j].m==b[k].m){
				num+=a[j].m;
				a[j].m-=b[k].m;
				j++,k++;
			}
		}else{
			if(a[j].m<b[k].m){
				b[k].m-=a[j].m;
				a[j].m=0;
				j++;
			}else if(a[j].m>b[k].m){
				a[j].m-=b[k].m;
				b[k].m=0;
				k++;
			}else if(a[j].m==b[k].m){
				a[j].m-=b[k].m;
				j++,k++;
			}
		}
	}
	cout<<num;
	return 0;
}
