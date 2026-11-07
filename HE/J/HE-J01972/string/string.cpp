#include<bits/stdc++.h>
using namespace std ;
int n;
long long sum,cnt;
int a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i],&b[i]);
	}
	int i=1,j=n;
	while(i<j){
		if(b[i]!=b[j]){
			if(a[i]>a[j]){
				a[i]=a[i]-a[j];
				cnt+=a[j];
				j--;
			}else if(a[i]<a[j]){
				a[j]=a[j]-a[i];
				cnt+=a[i];
				i++;
			}else if(a[i]==a[j]){
				cnt+=a[i];
				j--;
				i++;
			}
		}else{
			if(a[i]>a[j]){
				a[i]=a[i]-a[j];
				j--;
			}else if(a[i]<a[j]){
				a[j]=a[j]-a[i];
				i++;
			}else if(a[i]==a[j]){
				j--;
				i++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
