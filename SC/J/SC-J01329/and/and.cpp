#include<bits/stdc++.h>
using namespace std;
int n,m,sj[200005],al[200005],bl[200005],cl[200005];
long long and1(int ai,int bi){
	int vui=1;
	long long hh=ai,dl=0;
	while(hh>0){
		int g=hh/2%2;
		al[vui]=g;
		hh/=2;
		vui++;
	}
	hh=bi;
	vui=1;
	while(hh>0){
		int g=hh/2%2;
		bl[vui]=g;
		hh/=2;
		vui++;
	}
	vui--;
	for(int i=vui;i>=1;i--){
		if(al[i]==bl[i]) cl[vui+1-i]=1;
		else cl[vui+1-i]=0;
	}
	for(int i=1;i<=vui;i++){
		if(cl[i]==0) continue;
		else{
			hh=1;
			for(int i=1;i<=vui-i;i++) hh*=2;
			dl+=hh;
		}
	}
	return dl;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,cn,cny,chn;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>sj[i];
	sort(sj+1,sj+n+1);
	cn=m-2,cny=n,chn=n-1;
	long long ans=and1(sj[cny],sj[chn]);
	if(cn!=0){
		chn--;
		while(cn>0){
			ans=and1(ans,sj[chn]);
			cn--; chn--;
		}
	}
	cout<<ans;
	fclose(stdin);fclose(stdout);
	return 0;
}