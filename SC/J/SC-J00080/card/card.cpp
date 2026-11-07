#include<iostream>
using namespace std;
int n,m,a[500005],b[500005],b_num=1,c[200002];
long long ans;
int find_(int a,int b[]){
	for(int i=1;i<=b_num;i++){if(b[i]==a){return i;}}
}
bool find(int a,int b[]){
	for(int i=1;i<=b_num;i++){if(b[i]==a){return true;}}
	return false;
}
void card(long long ans,int i){
	for(int j=i;j<=n;j++){
		if(find(a[j],b)){
		    b_num=find_(a[j],b)+1;
		    continue;
		}
        b[b_num++]=a[j];
	}
	for(int j=1;j<=b_num-1;j++){c[b[j]]++;}
}
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);	
	cin>>n>>m;
	for(int i=1;i<=n;i++){cin>>a[i];}
	for(int i=1;i<=n;i++){card(ans,i);b_num=1;}
    for(int i=1;i<=m;i++){if(c[i]){cout<<c[i]<<' ';}}
	return 0;
}