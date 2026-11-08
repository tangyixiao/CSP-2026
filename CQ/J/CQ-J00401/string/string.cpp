#include<bits/stdc++.h>
using namespace std;
struct zfc{
	long long a;
	char c;
};
long long n,L=1,R=1,ans=0,r;
zfc stl[200005];
zfc str[200005];
int aa[200005];
char cc[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>aa[i];
		cin>>cc[i];
		r+=aa[i];
	}
	long long lfh=0;
	if(r%2==0){
		for(int i=1;i<=n;i++){
			if(lfh+aa[i]<=r/2){
				stl[L].a=aa[i];
				stl[L].c=cc[i];
				L++;
			}
			if(lfh<=r/2&&lfh+aa[i]>r/2){
				stl[L].a=r/2-lfh;
				stl[L].c=cc[i];
				str[R].a=aa[i]+lfh-r/2;
				str[R].c=cc[i];
				L++;R++;
			}
			if(lfh>r/2){
				str[R].a=aa[i];
				str[R].c=cc[i];
				R++;
			}
			lfh+=aa[i];
		}
	}
	else{
		for(int i=1;i<=n;i++){
			if(lfh+aa[i]<=r/2+1){
				stl[L].a=aa[i];
				stl[L].c=cc[i];
				L++;
			}
			if(lfh<=r/2+1&&lfh+aa[i]>r/2+1){
				stl[L].a=r/2+1-lfh;
				stl[L].c=cc[i];
				str[R].a=aa[i]+lfh-r/2-1;
				str[R].c=cc[i];
				L++;R++;
			}
			if(lfh>r/2+1){
				str[R].a=aa[i];
				str[R].c=cc[i];
				R++;
			}
			lfh+=aa[i];
		}
		if(stl[L-1].a==1) L--;
		else stl[L-1].a--;
	}
	long long z=0,lz=1,rz=R-1;
	while(!lz>=L||!rz<1){
		if(stl[lz].a==str[rz].a){
			if(stl[lz].c!=str[rz].c) ans+=stl[lz].a;
			lz++;rz--;
			z+=stl[lz].a;
		}
		else if(stl[lz].a<str[rz].a){
			if(stl[lz].c!=str[rz].c) ans+=stl[lz].a;
			str[rz].a-=stl[lz].a;
			lz++;
			z+=stl[lz].a;
		}
		else if(stl[lz].a>str[rz].a){
			if(stl[lz].c!=str[rz].c) ans+=str[rz].a;
			stl[lz].a-=str[rz].a;
			rz--;
			z+=str[rz].a;
		}
	}
	cout<<ans;
	return 0;
}
