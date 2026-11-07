#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct str{
	int sl;
	char wz;
}strs[100003];
struct fstr{
	int sl;
	char wz;
}fstrs[100003];
string wenz="";
char sz[100003];
char fsz[100003];
bool cmp(char a,char b){
	return true;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>strs[i].sl>>strs[i].wz;
		sz[i] = strs[i].wz;
		fsz[i] = strs[i].wz; 
	}
	long long ans = 0;
	sort(fsz,fsz+n,cmp);
	for(int i=0;i<n;i++){
		if(fsz[i]!=sz[i]){
			ans+=strs[i].sl;
		}
	}
	long long index = 0;
	for(int i=0;i<n;i++){
		index+=strs[i].sl;
	}
	if(ans==0){
		cout<<0<<endl; 
	}else{
		cout<<index/2<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

