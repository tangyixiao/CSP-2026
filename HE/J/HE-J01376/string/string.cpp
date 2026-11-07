#include<bits/stdc++.h>
using namespace std;
long long n,a[300000],i=1,j=99999,num=0;
char c[300000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	j=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	while(i<j){
		if(a[i]==a[j]){
			if(c[i]!=c[j]){
				c[i]=c[j];
				num+=a[i];
			}
			i++;
			j--;
		}else{
			if(a[i]>a[j]){
				if(c[i]!=c[j]){
					c[j]=c[i];
					num+=a[j];
				}
				a[i]-=a[j];
				j--;
			}else{
				if(c[i]!=c[j]){
					c[i]=c[j];
					num+=a[i];
				}
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<num;
	return 0;
}
