#include<bits/stdc++.h>
using namespace std;
const int maxa=2e5+10;
int nex[maxa];char c[maxa];
int n;
int ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>nex[i]>>c[i];
	}
	int r=1,l=n;
	while(r<l){
		if(c[r]==c[l]){
			if(nex[r]>nex[l]){
				nex[r]=nex[r]-nex[l];
				l--;
			}else if(nex[r]<nex[l]){
				nex[l]=nex[l]-nex[r];
				r++;
			}else{
				l--;r++;
			}
		}else{
			if(nex[r]>nex[l]){
				ans=nex[l];
				nex[r]=nex[r]-nex[l];
				l--;
			}else if(nex[r]<nex[r]){
				ans=nex[r];
				nex[l]=nex[l]-nex[r];
				r++;
			}else{
				ans=min(nex[l],nex[r]);
				r++;l--;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}