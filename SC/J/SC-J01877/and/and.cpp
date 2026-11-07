#include<bits/stdc++.h> 
using namespace std;
bool cmp(int x,int y){
	return x<y;
}

int main(){
freopen("and.in","r",stdin);
freopen("and.out","w", stdout);
int m,c;
int a[1000005];

cin>>m>>c;
for(int i=0;i<m;i++){
	cin>>a[i];
}
sort(a+1,a+m+1,cmp);
int s=a[c];
cout<<s;
return 0;
}