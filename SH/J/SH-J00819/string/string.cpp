#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,L=0,a=0,num[200005],ans=0,i,j;
	char zf[200005];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>num[i]>>zf[i];
	}
	i=1;j=n;
	while(i<j){
		if(num[i]==num[j]){
			if(zf[i]!=zf[j]) ans+=num[i];
			i++;j--;
		}
		else{
			if(num[i]>num[j]){
				num[i]-=num[j];
				if(zf[i]!=zf[j]) ans+=num[j];
				j--;
			}
			else{
				num[j]-=num[i];
				if(zf[i]!=zf[j]) ans+=num[i];
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
