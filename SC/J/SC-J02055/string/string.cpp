#include<bits/stdc++.h>
using namespace std;
int yytn;
long long cnt;
struct szduan{
	int cdyyt;
	char zfyyt;
};
szduan a[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>yytn;
	for(int i=1;i<=yytn;i++){
		cin>>a[i].cdyyt>>a[i].zfyyt;
	}
	int l=1;
	int r=yytn;
	while(l<r){
		int khh=min(a[l].cdyyt,a[r].cdyyt);
		a[l].cdyyt-=khh;
		a[r].cdyyt-=khh;
		if(a[l].zfyyt!=a[r].zfyyt)cnt+=khh;
		if(a[l].cdyyt==0)l++;
		if(a[r].cdyyt==0)r--;
	}
	cout<<cnt;
	return 0;
}