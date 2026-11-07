#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int s;//组数 
    int n[s];//每组数量 
    int c=0;//长度 
    char b[s];//每组字母
    
    int h;//回文数段 
    int t=1;//tmp
    cin>>s;
    for(int i=1;i<=s;i++){
    	cin>>n[i];
    	cin>>b[i];
	}
	for(int i=1;i<=s;i++){
		c=c+n[i];
	}
	if(c%2==1){
		h=(c-1)/2;
	}
	if(c%2==0){
		h=c/2;
	}
	char a[c];//目标回文串
	char d[h];//需要的 
	char e[h];//比对 
	for(int i=1;i<=c;i++){
	    for(int j=1;j<=n[i];j++){
	    	a[t]=b[i];
	    	t++;
	    }
	}
	for(int i=1;i<=h;i++){
		d[i]=a[i];
	}
	for(int i=c;i<=h;i--){
		e[i]=a[i];
	}
	int cnt=0;
	for(int i=1;i<=h;i++){
		if(d[i]!=e[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}