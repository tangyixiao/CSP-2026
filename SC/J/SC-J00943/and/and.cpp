#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
string f[200005];
void deal(int x){
	int xx=a[x];
	while(xx>=2){
		char loc='0'+xx%2;
		xx/=2;
		f[x]+=loc;
	}
	f[x]+=('0'+xx);
}
int redeal(string x){
	int rtn=0;
	for(int i=x.size()-1;i>=0;--i){
		rtn+=(x[i]-'0')*pow(2,i);
	}
	return rtn;
}
bool cmp(int x,int y){
	return x<y;
}
string ander(string x,string y){
	if(y.size()>x.size()){
		string z=x;
		x=y;
		y=z;
	}
	string rtn=y;
	for(int i=0;i<y.size();++i){
		if(x[i]==y[i]&&x[i]=='1'){
			rtn[i]='1';
		}else{
			rtn[i]='0';
		}
	}
	return rtn;
}
string ff;
int res;
int tot=0;
void dfs(int x,int sta){ 
	if(x==m){
		//for(int i=1;i<=tot;++i){
		//	cout<<"    ";
		//}
		//cout<<"枚举结果"<<ff<<" "<<redeal(ff)<<endl;
		res=max(res,redeal(ff));
		return;
	}else{
		for(int i=sta+1;i<=n;++i){
			string reff=ff;
			if(x==0){
				tot++;
				ff=f[i];//cout<<"当前ff为"<<ff<<" "<<redeal(ff)<<endl; 
				dfs(x+1,i);
			}else{
				tot++;//cout<<ff<<" "<<redeal(ff)<<"和"<<f[i]<<" "<<redeal(f[i])<<"相与"<<endl; 
				ff=ander(ff,f[i]);
				dfs(x+1,i);
			}
			ff=reff;
			tot--;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
    int mmax=0;
	for(int i=1;i<=n;++i){
    	cin>>a[i];
    	deal(i);
    	mmax=max(mmax,a[i]);
	}
	/*for(int i=1;i<=n;++i){
		cout<<redeal(f[i])<<endl;
	}*/
	dfs(0,0);
	cout<<res<<endl;
	return 0;
}