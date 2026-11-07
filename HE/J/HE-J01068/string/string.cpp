#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
string str;
struct node{
	char c;
	int a;
}s[N];
int n,lenr,lenl,cost,str_size;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %c",&s[i].a,&s[i].c);
		for(int j=1;j<=s[i].a;j++) str=str+s[i].c;
	}
	str_size=str.size()-1;
	lenl=lenr=floor(str.size()/2);
	while(lenl!=0&&lenr!=str_size){
		if(str[--lenl]!=str[++lenr]){
			cost++;
			str[lenl]=str[lenr];
		}
	}
	if(cost!=0&&str.size()%2==0) cost++;
	printf("%d",cost);
	return 0;
}
