#include<bits/stdc++.h>
using namespace std;
int g,z,f,fu,zh;
string hw,hwe,fz;

	



int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	char zm;
	int n,gs[200010],sl;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>gs[i]>>zm;
		for(int j=1;j<=gs[i];j++){
			hw[f]=zm;
			hwe[f]=hw[f];
			f++;
		}
		
	}
	
	for(int i=0;i<=hw.size();i++){
		hwe[i]=hw[i];
	}
	for(int i=hw.size();i>=0;i--){
		hw[zh]=hwe[i];
	}
	if(fz==hw){
		cout<<"0";
		return 0;
	}
	else{
	for(int i=0;i<hw.size();i++){
		if(fz[i]!=hw[i]){
			g++;
		}
	}
	cout<<g;
	}
	return 0;
}



