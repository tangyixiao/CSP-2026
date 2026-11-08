#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N];
char c[N];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long l=0;
	int mid=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	long long i=1,j=n,x=0,y=0,ans=0;
	while(i<=j&&x+y<l){
		if(c[i]==c[j]){
			int mn=min(a[i],a[j]);
			a[i]-=mn;
			a[j]-=mn;
			x+=mn;
			y+=mn;
		}
		else{
			int mn=min(a[i],a[j]);
			a[i]-=mn;
			a[j]-=mn;
			x+=mn;
			y+=mn;
			ans+=mn;
		}
		if(a[i]==0) i++;
		if(a[j]==0) j--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
