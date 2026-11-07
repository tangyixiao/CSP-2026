#include<bits/stdc++.h>
using namespace std;
struct a{
	stack<int> t;
}sj[200001];
queue<int> zz;
queue<int> qc1;
queue<int> qc2;
queue<int> jg;
int gj[31];
int da[31];
bool pd(){
	for(int i=1;i<=30;i++){
		if(gj[i]!=0) return false;
	}
	return true;
}
void gjdsr(int n){
	memset(gj,0,sizeof(gj));
	char a='0';
	int ws=1;
	while(a!=' '){
		cin>>a;
		gj[ws]=a-'0';
		ws++;
	}
	int cs=0;
	while(pd()){
		for(int i=ws;i>=0;i--){
			gj[i]/=2;
			gj[i-1]+=gj[i]%2*10;
			if(i==0) sj[n].t.push(gj[i]/10);
		}
		cs++;
	}
	if(cs<30){
		for(int i=1;i<=30-cs;i++){
			sj[n].t.push(0);
		}
	}
}
void gjdcf(int n){
	memset(gj,0,sizeof(gj));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=31;j++){
			gj[i]*=2;
			gj[i+1]+=gj[i]/10;
			gj[i]%=10;
		}
	}
	for(int i=1;i<=31;i++){
		da[i]+=gj[i];
		da[i+1]+=da[i]/10;
		da[i]%=10;
	} 
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		gjdsr(i);
		qc1.push(i);
	}
	int sam=0;
	int o=0;
	for(int i=30;i>=1;i--){
		while((o&&!qc2.empty())||(!o&&!qc1.empty())){
			if(o){
				while(!qc2.empty()) qc2.pop();
				qc2.push(qc1.front());
			}else{
				while(!qc1.empty()) qc1.pop();
				qc1.push(qc2.front());
			}
			if(sj[i].t.top()){
				sam++;
				if(o){
					zz.push(qc1.front());
					qc1.pop();
				}else{
					zz.push(qc2.front());
					qc2.pop();
				}
			}	
			sj[i].t.pop();
		}
		if(sam<m){
			if(o){
				o=false;
			}else{
				o=true;
			}
			jg.push(0);
		}else{
			while(!zz.empty()){
				if(o){
					qc1.push(zz.front());
					zz.pop();
				}else{
					qc1.push(zz.front());
					zz.pop();
				}
			}
			jg.push(1);
		}
	}
	for(int i=30;i>=1;i++){
		if(jg.front()){
			int g=1;
			gjdcf(i);
		}
	}
	int i=30;
	while(da[i]==0) i--;
	for(int i;i>=1;i--){
		cout<<da[i];
	}
	return 0;
}