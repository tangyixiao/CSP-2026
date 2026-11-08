#include<bits/stdc++.h>
using namespace std;
int n,x,ans;
char a;
string s;
bool pd(string q){
	for(int i=0;i<(q.size()/2);i++){
		if(q[i]!=q[q.size()-i-1]){
			return 0;
		}
	}
	return 1;
}
void gz(string q){
	for(int i=0;i<(q.size()/2);i++){
		if(q[i]!=q[q.size()-i-1]){
			ans++;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		cin>>a;
		for(int j=1;j<=x;j++){
			s+=a;
		}
	}
	if(pd(s)==1){
		printf("0");
		return 0;
	}
	gz(s);
	printf("%d",ans);
	return 0;
}
