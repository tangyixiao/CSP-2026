#include<bits/stdc++.h>
using namespace std;

int m,n,a[500005],ant[300005];
vector<int> z;
queue<int> p;
int sf(int s) {
	for(int i=0;i<z.size();i++) if(z[i]==s) return i;
	return -1;
}
void pj(int qj){
	for(int i=1;i<=qj;i++) p.pop();
	for(int i=qj;i<=n;i++){
		int s=sf(a[i]);
		if(s!=-1) while(z.size()>s) z.pop_back();
		z.push_back(a[i]);
	}
	cout<<"\n MMM ";
	for(int j=0;j<z.size();j++) cout<<z[j]<<" ";
	for(int i=1;i<=m;i++){
		if(sf(i)!=-1){
			ant[i]++;
		}
	}
	cout<<"\n QQQ ";
	for(int i=1;i<=m;i++) cout<<ant[i]<<" ";
	z.clear();
	cout<<"\n";
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<"\n xyz \n";
	for(int i=1;i<=n;i++) pj(i);
	cout<<"\n xyz \n";
	for(int i=1;i<=m;i++) cout<<ant[i]<<" ";
	return 0;
}