#include<bits/stdc++.h>
using namespace std;
long long n,pla,pla1,pla2,plaz,ans,cnt,sum,qwe,asd;
bool zxc=0;
struct t{
	long long a;
	char c;
}t[1000005],z[1000005],str[100005];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i].a>>t[i].c;
		qwe+=t[i].a;
	}
	cnt=qwe/2;
	if(qwe%2==0){
		for(int i=1;i<=n;i++){
			ans+=t[i].a;
			if(ans>cnt){
				ans-=t[i].a;
				pla1=cnt-ans;
				pla2=ans+t[i].a-cnt;
				pla=i;
				break;
			}else if(ans==cnt){
				zxc=1;
			}
		}
		if(zxc==0){
			for(int i=1;i<=pla-1;i++){
				z[i].a=t[i].a;
				z[i].c=t[i].c;
			}
			asd=pla+1;
			z[pla].a=pla1;
			z[pla].c=t[pla].c;
			z[pla+1].a=pla2;
			z[pla+1].c=t[pla].c;
			for(int i=pla;i<=n;i++){
				z[++asd].a=t[i].a;
				z[++asd].c=t[i].c;
			}
		}else{
			asd=n;
			for(int i=1;i<=n;i++){
				z[i].a=t[i].a;
				z[i].c=t[i].c;
			}
		}
	}else{
		for(int i=1;i<=n;i++){
			ans+=t[i].a;
			if(ans==cnt){
				pla=i;
				if(t[pla+1].a==1){
					pla2=pla+2;
				}else{
					pla1=t[pla+1].a-1;
					pla2=pla+1;
				}
				zxc=1;
				break;
			}else if(ans>cnt){
				ans-=t[i].a;
				pla=i;
				pla1=cnt-ans;
				pla2=ans+t[i].a-(cnt+1);
				break;
			}
		}
		if(zxc==0){
			for(int i=1;i<=pla-1;i++){
				z[i].a=t[i].a;
				z[i].c=t[i].c;
			}
			asd=pla+1;
			z[pla].a=pla1;
			z[pla].c=t[pla].c;
			z[pla+1].a=pla2;
			z[pla+1].c=t[pla].c;
			for(int i=pla+1;i<=n;i++){
				z[++asd].a=t[i].a;
				z[++asd].c=t[i].c;
			}
		}
	}
	for(int i=1;i<=asd;i++){
		cout<<z[i].a<<" "<<z[i].c<<endl;
	}
	return 0;
}