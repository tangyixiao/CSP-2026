#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string c;
	int jg;
	string e;
	string f;
	for(int i=0;i<n;i+=jg){
		jg=0;
		cin >> jg;
		int zf;
		cin >> zf;
		for(int j=i;j<jg;j++){
			c[i]=zf;
		}
	}
	for(int k=0;k<ceil(n/2);k++){
		e[k]=c[k];
	}
	for(int l=c.size();l>floor(n/2);l--){
		f[l]=c[l];
	}
	int cnt_e=0;
	int cnt_f=0;
	for(int m=0;m<ceil(n/2);m++){
		if(e[m]!=f[m]){
			cnt_e++; 
		}
	}
	for(int o=0;o<ceil(n/2);o++){
		if(e[o]!=f[o]){
			cnt_f++; 
		}
	}
	if(cnt_e<cnt_f){
		cout << cnt_e;
	}
	else{
		cout << cnt_f;
	}
    return 0;
}
