#include<bits/stdc++.h>
using namespace std;
int n,x[200005];
long long s=0;
char y[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
	int l=1,r=n;
	while(l<r){
		if(y[l]==y[r]){
			if(x[l]>x[r]) x[l]-=x[r],r--;
			else if(x[r]>x[l]) x[r]-=x[l],l++;
			else l++,r--;
		}
		else{
			if(x[l]>x[r]) x[l]-=x[r],s+=x[r],r--;
			else if(x[r]>x[l]) x[r]-=x[l],s+=x[l],l++;
			else s+=x[l],l++,r--;
		}
	}
	cout<<s;
	return 0;
}