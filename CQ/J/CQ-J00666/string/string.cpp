#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	char c[n];
	long long int len=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	int ans=0;
	int k1=0;
	int k2=n-1;
	long long int al1=0;
	long long int al2=len;
	for(int i=0;i<len/2;i++){
		if(i-al1+1>a[k1]){
			al1+=a[k1];
			k1++;
		}
		if(al2-(len-i)>a[k2]){
			al2-=a[k2];
			k2--;
		}
		if(c[k1]!=c[k2])ans++;
	}
	printf("%d",ans);
	return 0;
} 

