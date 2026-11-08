#include<bits/stdc++.h>
using namespace std;
const int MAXX=5e5+5;
const int MAXXX=3e5+5;
bool TF_use[MAXX];
int a[MAXX];
int jilu[MAXX];
int M[MAXXX];
int the_sum=0;
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++) M[j]=-1;//记录上次使用地点 
		for(int j=0;j<=m;j++) TF_use[j]=true; 
		for(int j=i;j<=n;j++){
			if(M[a[j]]==-1) M[a[j]]=j;
			else{
				for(int k=M[a[j]];k<=j;k++){
					M[a[k]]=-1;
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(M[a[j]]!=-1&&TF_use[a[j]]){
				jilu[a[j]]++;
				TF_use[a[j]]=false;
			}
		}
		for(int i=1;i<=m;i++) cout<<jilu[i]<<' ';
		cout<<'\n';
	}
	for(int i=1;i<=m;i++) cout<<jilu[i]<<' ';
	return 0;
}
