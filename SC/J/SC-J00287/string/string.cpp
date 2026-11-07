#include<bits/stdc++.h>
using namespace std;
long long n,num[200005],ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i) cin>>num[i]>>c[i];
	int i=1,j=n;
	while(i<=j){
		if(num[i]>num[j]){
			if(c[i]!=c[j]) ans+=num[j];
			num[i]-=num[j];
			j--;
		}else if(num[i]<num[j]){
			if(c[i]!=c[j]) ans+=num[i];
			num[j]-=num[i];
			i++;
		}else{
			if(c[i]!=c[j]) ans+=num[i];
			i++,j--;
		}
	}
	cout<<ans;
	return 0;
}