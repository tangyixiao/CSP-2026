#include<bits/stdc++.h>
using namespace std;
const int MAXN=200200;
int n,b[MAXN],x;
unsigned long long a[MAXN],ans;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c;
		b[i]=c-'a'+1;
	}
	for(int i=0,j=n-1;i<j;){
		if(b[i]!=b[j]){
			ans+=min(a[i],a[j]);
		}
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
	cout<<ans<<endl;
	return 0;
}

