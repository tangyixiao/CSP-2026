#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,sum=0,a[200005],p1,p2;
	char s[200005];
    cin>>n;
    p1=1,p2=n;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>s[i];
	}
	while(p1<=p2){
		if(s[p1]!=s[p2]){
			sum+=min(a[p1],a[p2]);
		}
		if(a[p1]>a[p2]){
			a[p1]-=a[p2];
			p2--;
		}else if(a[p1]==a[p2]){
			a[p1]=a[p2]=0;
			p1++;
			p2--;
		}else{
			a[p2]-=a[p1];
			p1++;
		}
	}
	cout<<sum;
	return 0;
}