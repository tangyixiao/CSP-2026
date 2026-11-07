#include<bits/stdc++.h>
using namespace std;
int s[1000000]={0};
int ru[1000000]={0};
int n,m;
int num=0;
int main(){
     freopen("card.in","r",stdin);
 freopen("card.out","w",stdout);
cin>>n>>m;
int dd=0;
int mm[m];
for(int ii=0;ii<n;ii++){
        cin>>s[i];
}
for(int i=0;i<n;){
    for(int j=0;j<i;j++){
        if(s[j]==s[i]){
                s[jj]=0;
            i=j;
        }
    }
        i++;
}
for(int iii=0;iii<n;iii++){
    mm[s[iii]]+=1;
}
for(int iiii=0;iiii<n;iiii++){
    s[iiii]=0;
}
dd++;

for(int i=0;i<m;i++){
    cout<<mm[i]<<' ';
}
return 0;
}
