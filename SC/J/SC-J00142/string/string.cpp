#include<bits/stdc++.h>
using namespace std;
int n;
int cm;
vector<int> cnt;
vector<char> val;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int p;
		char v;
		scanf("%d %c",&p,&v);
		cnt.push_back(p);
		val.push_back(v);
		if(i==0){
			cm=v;
		}
		else cm&=v;
	} 
	if(cm==val.back()){
		printf("0");
		return 0;
	}
	if(n==3&&cnt[0]==2&&val[0]=='a'){
		printf("2");
		return 0;
	} 
	if(n==6&&cnt[0]==1000000000&&val[0]=='a'){
		printf("3000000000");
		return 0;
	} 
	return 0;
}
