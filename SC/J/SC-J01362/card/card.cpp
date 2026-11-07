#include<bits/stdc++.h>
using namespace std;

const int N=5*1e5+50;
int sp[N];
int zm[N];
int js[N];

int main(){
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>sp[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;i<n;j++){
			zm[j]=sp[j];
			for(int k=0;k<n;k++){
				if(zm[k]==zm[j] || k!=j){
					for(int i=0;i<n;i++){
						zm[i]=0;
					}
					zm[j]=sp[j];
				} 
			}
			sp[j]=0;
		}
		for(int j=0;j<n;j++){
			js[zm[j]]++; 
		}
	}
	for(int i=0;i<m;i++){
		cout<<js[i];
	}
	
	return 0;
}