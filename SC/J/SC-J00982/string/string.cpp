#include <bits/stdc++.h>
using namespace std;
long long sz[200006],z,zz,zj,zjw;
char sz1[200006],zj1,zjw1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,bm,bmw;
	string a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>sz[i]>>sz1[i];
	}
	bm=0;
	zj=sz[bm];
	zj1=sz1[bm];
	bmw=n-1;
	zjw=sz[bmw];
	zjw1=sz1[bmw];
	while(bm<bmw){
		if(zj1==zjw1){
			if(zj>zjw){
				zj=zj-zjw;
				bmw--;
				zjw=sz[bmw];
				zjw1=sz1[bmw];
			}else if(zj<zjw){
				zjw=zjw-zj;
				bm++;
				zj=sz[bm];
				zj1=sz1[bm];
			}else if(zj==zjw){
				bmw--;
				zjw=sz[bmw];
				zjw1=sz1[bmw];
				bm++;
				zj=sz[bm];
				zj1=sz1[bm];
			}
		}else if(zj1!=zjw1){
			if(zj>zjw){
				zz+=zjw;
				zj=zj-zjw;
				bmw--;
				zjw=sz[bmw];
				zjw1=sz1[bmw];
			}else if(zj<zjw){
				zz+=zj;
				zjw=zjw-zj;
				bm++;
				zj=sz[bm];
				zj1=sz1[bm];
			}else if(zj==zjw){
				zz+=zj;
				bmw--;
				zjw=sz[bmw];
				zjw1=sz1[bmw];
				bm++;
				zj=sz[bm];
				zj1=sz1[bm];
			}
		}
	}
	cout<<zz;
	fclose(stdin);
	fclose(stdout);
	return 0;
}