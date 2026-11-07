#include<bits/stdc++.h>
using namespace std;
const int N=1e6+11;
int s[N],o[N];
int a,b;
int dg(int v,int p){
	int maxx=0;
	int l;
	for(int i=1;i<=a;i++){
		if(v&s[i]>maxx){
		maxx=s[i];
		l=i;
		}
	}
	if(p==2)
	return (v&maxx);
	else{
		p--;
		s[l]=0;
		return dg((v&maxx),p);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

cin>>a>>b;
for(int i=1;i<=a;i++){
	cin>>s[i];
	o[i]=s[i];
}
if(a==b){
	int q=s[1];
	for(int i=2;i<=a;i++)
	q=q&s[i];
	cout<<q<<endl;
}
int ddd=0;
for(int i=1;i<=a;i++){
int k=b;
for(int j=1;j<=a;j++){
	
	s[i]=o[i];
}
if(dg(s[i],k)>ddd)
ddd=dg(s[i],k);
}
cout<<ddd;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
