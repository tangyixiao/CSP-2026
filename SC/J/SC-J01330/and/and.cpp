#include<bits/stdc++.h>
using namespace std;
vector<bool> er1(35,false);
vector<bool> er2(35,false);
vector<long long> er3(35,0);
int anwei(long long x,long long y){
	int z=34;
	while(x){
		er1[z]=x%2;
		z--;
		x/=2;
	}
	z=34;
	while(y){
		er2[z]=y%2;
		z--;
		y/=2;
	}
	long long zhi=0;
	for(int m=0;m<35;m++){
		if(er1[m]&&er2[m]){
			er3[m]=true;
		}
	}
	for(int m=0;m<34;m++){
		er3[m-1]+=2*er3[m-2];
	}
	return er3[34];
}
void qin(){
	for(int x=0;x<35;x++){
		er1[x]=0;
		er2[x]=0;
		er3[x]=0;
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long da=0;
	long long a,b;
	cin>>a>>b;
	bool shi=true;
	long long zhi=0;
	while(shi){
		if(a%2==1){
			shi=false;
		}
		a/=2;
	}
	vector<int> shu(a+5);
	for(int x=0;x<a;x++){
		int y;
		cin>>y;
		shu[x]=y;
		if(y!=x){
			shi=false;
		}
	}
	zhi=shu[0];
	if(b==2){
		for(int x=0;x<a;x++){
			for(int y=x+1;y<=a;y++){
				qin();
				if(anwei(shu[x],shu[y])>da){
					da=anwei(shu[x],shu[y]);
				}
			}
		}
	}else if(b==1){
		for(int x=0;x<a;x++){
			if(shu[x]>da){
				da=shu[x];
			}
		}
	}else if(a==b){
		for(int x=1;x<a;x++){
			zhi=anwei(zhi,shu[x]);
		}
		da=zhi;
	}
	cout<<da;
	return 0;
}