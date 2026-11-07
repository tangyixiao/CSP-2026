#include<bits/stdc++.h>
using namespace std;
long long j[200010]={0};
long long a[200010]={0},b[200010]={0},kll[12]={0};
long long h1[200010]={0},h2[200010]={0};
char s[200010],sd[200010];

int main(){
  	freopen("string.in","r",stdin);
  	freopen("string.out","w",stdout);
	long long n,cnt=0,jl=1,ans,ane=0,kl=0,jj=0;
	long long vs1,vs2,minn;
	char vsa,vsb;
	long long zz=0;
	cin>>n;
	if(n>=1){
		cin>>a[1]>>s[1];
		if(n==1){
			cout<<"0";
			return 0;
		}
	}
	sd[jl]=s[1];
	cnt+=a[1];
	for(int i = 2; i <= n; i++){
		cin>>a[i]>>s[i];
		cnt+=a[i];
		if(s[i]!=sd[jl]){
			sd[jl+1]=s[i];
			j[jl]=i-1;
			jl+=1;
		}
	}
	j[jl]=n;
	if(cnt%2==0){
		ans=cnt/2;
	}else{
		ans=(cnt-1)/2;
	}
	for(int i = 1; i <= jl; i++){
		for(int k = 1; k <= j[i]; k++){
			b[i]+=a[k];
		}
		ans-=b[i];
		if(ane==0){
			if(ans<0){
				kl=i;
				jj=1;
				ans+=b[i];
				kll[1]=ans;
				kll[2]=b[i]-ans;
				ane=1;
			}else if(ans==0){
				kl=i;
				jj=0;
				ane=1;
			}
		}
	}
	if(jj==1){
		for(int i = 1; i <= kl; i++){
			if(i==kl){
				h1[i]=kll[1];
			}else{
				h1[i]=b[i];
			}
		}
		for(int i = kl; i <= jl; i++){
			if(i==kl){
				h2[i]=kll[2];
			}else{
				h2[i]=b[i];
			}
		}
	}else{
		for(int i = 1; i <= kl; i++){
			h1[i]=b[i];
		}
		for(int i = 1; i <= jl-kl; i++){
			if(i==1){
				h2[i]=b[i]-1;
			}else{
				h2[i]=b[i];
			}
		}
	}
	int fg=1,fh=1;
	int ff=1;
	vs1=h1[fg];vsa=sd[fg];
	vs2=h2[fh];vsb=sd[jl-fh+1];
	while(ff==1){
		cout<<vs1<<" "<<vs2<<" "<<fg<<" "<<fh;
		if(vs1==0){
			if(vs2==0){
				if(fg==kl){
					if(fh==(jl-1)){
						cout<<zz;
						return 0;
					}
				}
			}
		}else{
			if(vs1!=0){
				if(vs2!=0){
					if(vsa==vsb){
						minn=min(vs1,vs2);
						vs1-=minn;
						vs2-=minn;
					}else{
						minn=min(vs1,vs2);
						vs1-=minn;
						vs2-=minn;
						zz+=minn;
					}
				}else{
					if(fh!=jl){
						fh++;
						vs2=h2[fh];
						vsb=sd[jl-fh+1];
					}
				}
			}else{
				if(fg!=kl){
					fg++;
					vs1=h1[fg];
					vsa=sd[fg];
				}
			}
		}
	}
}