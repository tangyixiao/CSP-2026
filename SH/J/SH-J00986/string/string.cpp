#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long int a[200005],ans=0;
	char x[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>x[i];
	}
	int i=1,j=n;
	while(i<j){
		if(a[i]>a[j]){
			if(x[i]!=x[j])ans+=a[j];
			a[i]-=a[j];
			j--;
		}
		if(a[i]==a[j]){
			if(x[i]!=x[j])ans+=a[i];
			i++;
			j--;
		}
		if(a[i]<a[j]){
			if(x[i]!=x[j])ans+=a[i];
			a[j]-=a[i];
			i++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
