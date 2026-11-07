//记得把cin,cout改成fin,fout 
#include<bits/stdc++.h>
using namespace std;
const int N=3e5+2;
int n,m,a[N*2],card[N],len,f[N];
bool now[N],q;
int main(){
	ifstream fin("card.in");
	ofstream fout("card.out");
	fin>>n>>m;
	for(int i=1;i<=n;i++){
		fin>>a[i];
		if(a[i]<a[i-1]) q=1;
	}
	if(q==0){
		int nlast=a[1];
		for(int i=2;i<=n;i++){
			if(a[i]!=nlast){
				nlast=a[i];
				fout<<i-1<<" ";
			}
		}
		fout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(now,0,sizeof(now));
		memset(card,0,sizeof(card));
		len=0;
		for(int j=i;j<=n;j++){
			if(!now[a[j]]){
				card[++len]=a[j];
				now[a[j]]=1;
			}else{
				bool flag=1;
				for(int k=len;k>=1;k--){
					if(a[j]==card[k]){
						len=k;
						flag=0;
						break;
					}
					now[card[k]]=0;
				}
			}
		}
		for(int j=1;j<=len;j++) f[card[j]]++;
	}
	for(int i=1;i<=m;i++) fout<<f[i]<<" ";
	fin.close();
	fout.close();
	return 0;
}
