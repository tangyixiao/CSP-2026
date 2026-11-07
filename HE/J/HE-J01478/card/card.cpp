#include<bits/stdc++.h>
using namespace std;
long long n,m,a[5005],b[3005],f,s[3005];
queue<int>q;
int main(){
freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
cin>>n>>m;
if(n<=5000&&m<=3000){
for(int i=1;i<=n;i++)  cin>>a[i];	
for(int j=1;j<=n;j++){
for(int i=j;i<=n;i++){
if(b[a[i]]==1){
while(!q.empty()){
f=q.front();
b[f]=0;
q.pop();
}
q.push(a[i]);
}else{
q.push(a[i]);
b[a[i]]=1;
}
}
while(!q.empty()){
f=q.front();
s[f]++;
b[f]=0;
q.pop();
}
}
for(int i=1;i<=m;i++){
cout<<s[i]<<" ";
}
cout<<'\n';
}
fclose(stdin);
fclose(stdout);
return 0;
}
