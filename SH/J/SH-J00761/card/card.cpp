#include<iostream>
#include<stack> 
#include<cstdio>
using namespace std;
const int N=5e5+7;
int a[N],ans[N],b[N],n,m;
stack<int> prg;
void cal(int s){
//	cout<<"H2O\n";
	for(int i=1;i<=m;i++) b[i]=0;
//	cout<<m<<" "<<b[3]<<endl;
	for(int i=s;i<=n;i++){
//		cout<<i<<endl;
		if(!b[a[i]]){
//			cout<<"Ca(OH)2\n";
			b[a[i]]=1;
			prg.push(a[i]);
		}
		else{
//			cout<<"NaOH\n";
			while(prg.top()!=a[i]) prg.pop();
			b[a[i]]=0;
		}
	}
//	cout<<"H2SO4\n";
	while(!prg.empty()){
		ans[prg.top()]++;
		prg.pop();
	}
//	cout<<"HCl"<<endl;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cal(i);
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
