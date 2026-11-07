#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int l;
long long cnt=0;
int nm[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	memset(nm,-1,sizeof(nm));
	cin>>l;
	for(int i=1;i<=l;i++){
		cin>>nm[i];
		cin>>c[i];
	}
	int le=1,ri=l;
	while(le!=ri){
		bool power;
		if(nm[le]>nm[ri]) power=1;
		else power=0;
		if(c[le]==c[ri]){
			if(power==1){nm[le]-=nm[ri]; ri--;}
			else {nm[ri]-=nm[le];le++;}
			continue;
		}
		if(c[le]!=c[ri]){
			if(power==1){nm[le]-=nm[ri];cnt+=nm[ri];ri--;}
			else{nm[ri]-=nm[le];cnt+=nm[le];le++;}
		}
	}
	cout<<cnt;
	return 0;
}