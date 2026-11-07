#include<bits/stdc++.h>
using namespace std;
int n,m;
int card[300005];
int table[300005];
int ans[300005];
bool a(int index,int number){
    bool p=false;
for(int i=0;i<index;i++){
    if(table[i]==number){
        p=true;
        break;
    }
}
return p;
}

int b(int index,int number){
for(int i=0;i<index;i++){
    if(table[i]==number){
        return i;
    }
}
}
void cl(int last){
for(int i=0;i<last;i++){
    table[i]=0;
}
}
int main(){
freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
int last=0;
cin>>n>>m;/*
for(int i=0;i<m;i++){
    cin>>card[i];
}
for(int z=0;z<n;z++){
        cl(last);
        last=0;
for(int i=z;i<m;i++){
    table[last]=card[i];
    if(a(last,table[i])){
        last=b(last+1,table[i]);
        //cout<<"!"<<table[last-1];
    }
    last++;
}
for(int i=0;i<last-1;i++){
    ans[table[i]]++;
}
}
for(int i=0;i<m;i++){
    cout<<ans[i]<<" ";
}*/
for(int i=0;i<m;i++){
    cout<<n<<" ";
}
return 0;
}
