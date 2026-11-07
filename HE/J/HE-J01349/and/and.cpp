#include<bits/stdc++.h> 
using namespace std;
bool rule(int a,int b){
return a>b;
}
int n,m,e; 
short a0b[30][200010];int a[200010],a1[200010],aw[30];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		a1[i]=a[i];
	}
	sort(a1,a1+n,rule);sort(a,a+n,rule);
	for(int i=0;i<n;i++){
		int v=29;
		while(a1[i]>0){
			a0b[v][i]=a1[i]%2;aw[v]+=a1[i]%2;a1[i]/=2;
			v--;
		}
	}
	for(int i=0;i<30;i++){
		if(aw[i]<m){
			for(int ii=0;ii<aw[i];ii++){
				a[ii]-=pow(2,30-i-1);
			}
			sort(a,a+n,rule);
			for(int ii=0;ii<30;ii++){
				aw[ii]=0;
				
			}
			for(int ii=0;ii<n;ii++){
				a1[ii]=a[ii];
			}
			for(int ii=0;ii<n;ii++){
				int v=29;
				while(a1[ii]>0){
					a0b[v][ii]=a1[ii]%2;a1[ii]/=2;
					aw[v]+=a0b[v][ii];
					v--;
				}
			}
		}else{
			e+=pow(2,29-i);
			n=aw[i];
			for(int ii=0;ii<aw[i];ii++){
				a[ii]-=pow(2,30-i-1);
			}
			sort(a,a+n,rule);
			for(int ii=0;ii<30;ii++){
				aw[ii]=0;
			}
			for(int ii=0;ii<n;ii++){
				a1[ii]=a[ii];
			}
			for(int ii=0;ii<n;ii++){
				int v=29;
				while(a1[ii]>0){
					a0b[v][ii]=a1[ii]%2;a1[ii]/=2;
					aw[v]+=a0b[v][ii];
					v--;
				}
			}
		}
	}
	cout<<e;
	return 0;
}
