#include<bits/stdc++.h>
using namespace std;
int n,a[200001],ma=0,m,may,temp,ch[200001],x=0;
short k=0;
int as=1,aa=1;
bool po=1;
bool check(){
	if((n>=m||po)&&as>0) return 1;
	return 0;
} 
bool check2(int y){
	for(int i=0;i<=x;i++){
		if(y>ch[x]) return 1;
	}
	return 0;
}
void check3(){
	int co=0;
	for(int i=0;i<n;i++){
		if(a[i]/as==1) {
			co++;
		}
	}
	if(co>=m||as==0){
		return;
	}else{
		as/=2;
	    check3();
	}

}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(ma<a[i]) {
			ma=a[i];
			may=i;
		}
	}
	int ans=2147483647;
	temp=ma;
	while(temp>0){
		temp/=2;
		k++;
	}
	for(int i=1;i<k;i++){
		as*=2;
	}
	check3();
	while(as>0){
		for(int i=0;i<n;i++){
			bool q=!check2(a[i]);
			if((a[i]/as==0&&!po)||q) {
				a[i]=-1;n--;	
			}
			if((a[i]/as==1&&i!=may&&a[i]!=-1)||(m==1)){
				aa++;
				if(aa>=m) {
					po=0;
					int mi=2e9+1,miy=0;
					for(int i=0;i<x;i++){
						if(mi>ch[i]) {
							mi=ch[i];
							miy=i;
						}
					}
					if(!q) {
						ch[miy]=a[i];
					}
				}else{
					ch[x++]=a[i];
				}
			}
			a[i]-=a[i]/as*as;
		}
		as/=2;
	}
	for(int i=0;i<m;i++){
		if(ch[i]!=0) ans&=ch[i];
	}
	cout<<ans;
	return 0;
}
