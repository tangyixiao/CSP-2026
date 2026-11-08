#include<bits/stdc++.h> 
using namespace std;
long long n,a[1000000],b[1000000],k,m=1,ans;
char c[1000000],d1[1000000],d2[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		k+=a[i];
		b[i]=a[i];
	}
	for(long long i=1;i<=n;i++){
		while(b[i]!=0){
			d1[m]=c[i];
			m++;
			b[i]--;
		}
	}
	long long tou=1,wei=k;
	while(tou<=wei-1){
		if(d1[tou]!=d1[wei]){
			ans++;
		}
		tou++;wei--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
