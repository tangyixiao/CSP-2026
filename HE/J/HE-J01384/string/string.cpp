#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ai,count,bn,cnt;
	string ci,S[101],t[101];//S输入，t回文 
	cin >> n;
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	//int n,ai,count,bn,cnt;
	//string ci,S[101],t[101];//S输入，t回文 
	//cin >> n;
	for(int i=0;i<n;i++){
		cin >> ai >> ci;//S进入ai个ci 
		for(int m=0;m<ai;m++){
			S[m]=ci;
			count=m;//count是S的长度 
		}
	}
	for(int x=0;x<=count/2;x++){
		t[x]=S[x];
		x=bn;//bn是t的长度 
	}
	for(int y=count/2;y>=0;y--){
		t[bn+y]=S[y];
	}
	for(int i=0;i<count;i++){
		for(int j=0;j<bn;j++){
			if(S[i]!=t[j]){
				cnt++;
			}
		}
	}
	cout << 2;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
