#include<bits/stdc++.h>
using namespace std;
int a[200200];
char b[200200];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long l=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		l+=a[i];
	}
	int j=n;
	long long ans=0;
	for(int i=1;i<=n;){
		if(j<i){
			cout<<ans<<endl;
			return 0;
		}
		if(b[i]==b[j]){
			int mi=min(a[i],a[j]);
			int p=i,q=j;
			if(a[i]==mi)i++;
			if(a[j]==mi)j--;
			a[p]-=mi;
			a[q]-=mi;
		}else{
			int mi=min(a[i],a[j]);
			int p=i,q=j;
			if(a[i]==mi)i++;
			if(a[j]==mi)j--;
			a[p]-=mi;
			a[q]-=mi;
			ans+=mi;
		}
	}
	cout<<ans<<endl;
	return 0;
}