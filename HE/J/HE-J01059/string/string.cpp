#include<bits/stdc++.h>
using namespace std;
int a[200009];
char b[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1,j=n;i<j;){
		if(b[i]!=b[j]){
			if(a[i]>a[j]){
				ans+=a[j];
				a[i]-=a[j];
				j--;
			}
			else if(a[i]<a[j]){
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}
			else{
				ans+=a[i];
				i++;
				j--;
			}
		}
		else{
			if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}
			else if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}
			else{
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
