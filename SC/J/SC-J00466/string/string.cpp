#include<bits/stdc++.h>
using namespace std;
int n,a[200010],sum=0;
string c[200010];
int main(){
	freopen("string.in","r",strin);
	freopen("string.out","w",strout);
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1; i<=n; i++){
		int ans=n;
		if(c[i]==c[ans]){
			i=i+1;
			ans=ans-1;
		}else{
			sum++;
		}
	} 
	cout<<sum;
	return 0;
}