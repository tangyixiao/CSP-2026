#include<bits/stdc++.h>
using namespace std;
int aa[20005];
char cc[20005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	cin>>n;
	char c;
	int sl=0;
	int k=0;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		aa[i]=a+aa[i-1];
		cc[i]=c;
		sl=sl+a;
		k++;
	}
	long ans=0;
	int j=1;
	for(int i=0;i<sl/2;i++){
		if(i>aa[j]){
			j++;
		}
		if(sl-i-1<aa[k-1]){
			k--;
		}
		if(cc[j]!=cc[k]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
