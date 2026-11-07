#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum,i,j;
char s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	i=1;
	j=n;
	while(i<j){
		if(s[i]==s[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				a[j]=0;
				j--;
			}else{
				a[j]-=a[i];
				a[i]=0;
				i++;
			}
		}else{
			if(a[i]>a[j]){
				sum=sum+a[j];
				a[i]-=a[j];
				a[j]=0;
				j--;
			}else{
				sum=sum+a[i];
				a[j]-=a[i];
				a[i]=0;
				i++;
			}
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
