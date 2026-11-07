//记得把cin,cout改成fin,fout 
#include<iostream>
#include<fstream>
using namespace std;
const int N=2e5+2;
int n,m;
long long a[N],f[N],l,k;
bool b[N];
/*
5 3
31 3 1 15 7

*/
void fun(int x){
	if(x==0){
		l=f[1];
		for(int i=2;i<=m;i++) l&=f[i];
		k=max(k,l);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!b[i]){
			b[i]=1;
			f[x]=a[i];
			fun(x-1);
			b[i]=0;
		}
	}
}
int main(){
	ifstream fin("and.in");
	ofstream fout("and.out");
	fin>>n>>m;
	for(int i=1;i<=n;i++){
		fin>>a[i];
	} 
	if(m==n){
		l=a[1];
		for(int i=2;i<=n;i++){
			l&=a[i];
		}
		fout<<l;
	}
	else if(m==n-1){
		long long ml=-1;
		for(int i=1;i<=n;i++){
			if(i==1) l=a[2];
			else l=a[1];
			for(int j=1;j<=n;j++){
				if(j!=i) l&=a[j];
			}
			ml=max(ml,l);
		}
		fout<<ml;
	}
	else if(m==1){
		long long ml=-1;
		for(int i=1;i<=n;i++) ml=max(ml,a[i]);
		fout<<ml;
	}else if(m==2){
		long long ml=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ml=max(ml,a[i]&a[j]);
			}
		}
		fout<<ml;
	}else{
		fun(m);
		fout<<k;
	}
	fin.close();
	fout.close();
	return 0;
}
