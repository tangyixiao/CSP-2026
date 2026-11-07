#include<bits/stdc++.h>
using namespace std;
struct pra{
	long long num;
	char z;
}a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n,k=1;
	long long s=0,l=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		long long x;
		scanf("%lld %c",&x,&a[k].z);
		l+=x;
		a[k].num=l;
		k++;
	}
	k--;
	for(long long i=1;i<l/2+1;i++){
		char ch_1='A',ch_2='A';
		for(int j=1;j<=k;j++){
			if(a[j].num>=i && ch_1=='A'){
				ch_1=a[j].z;
			}
			if(a[j].num>=l+1-i && ch_2=='A'){
				ch_2=a[j].z;
			}
		}
		if(ch_1!=ch_2){
			s++;
		}
	}
	printf("%lld \n",s);
	
	return 0;
}