#include<bits/stdc++.h>
using namespace std;
const int M=2e5+5;
long long a[35],b[M];
bool ans[35];
bool c[M][32];
int n,m;
int ko[M],oi=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==n){
		long long op,ls;
		cin>>op;
		for(int i=2;i<=n;i++){
			cin>>ls;
			op&=ls;
		}
		cout<<op<<endl;
	}else{
		long long lk;
		int kl=1;
		for(int i=1;i<=n;i++){
			cin>>b[i];
			lk=b[i];
			kl=1;
			while(lk>0){
				if(lk%2){
					a[kl]++;
					c[i][kl]=1;
				}
				kl++;
				lk/=2;
			}
		}
		int yu=-1;
		for(int i=31;i>=1;i--){
			if(a[i]>=m){
				yu=i;
				break;
			}
		}
		for(int i=1;i<=n;i++){
			if(c[i][yu])
			{
				oi++;
				ko[oi]=i;
			}
		}
		ans[yu]=1;
		if(yu==-1){
			cout<<0;
			return 0;
		}
		int mo=yu-1;
		while(mo>0){
			int num=0;
			for(int i=1;i<=oi;i++){
				if(c[ko[i]][mo])
				num++;
			}
			if(num<m){
				mo--;
			}
			else{
				int kn[M],ou=0;
				for(int i=1;i<=oi;i++){
					if(c[ko[i]][mo])
					{
						ou++;
						kn[ou]=ko[i];
					}
				}
				ans[mo]=1;
				for(int i=1;i<=ou;i++){
					ko[i]=kn[i];
				}
				oi=ou;
				mo--;
			}
		}
		long long mu=1,anss=0;
		for(int i=1;i<=yu;i++){
			if(ans[i]){
				anss+=mu;
			}
			mu*=2;
		}
		cout<<anss<<endl;
	}
}
