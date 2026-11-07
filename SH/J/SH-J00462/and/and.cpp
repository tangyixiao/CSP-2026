#include<bits/stdc++.h>
using namespace std;
string binary(long long a){
    string s;
    int f=0;
    while(a!=0){
        s[f]=a%2;
        a/=2;
    }
    return s;
}
int num1(string q){
    int all=0;
    for(int i=0;i<q.size();i++){
        if(q[i]=='1'){
            all++;
        }
    }
    return all;
}
int rebinary(string q){
    int all=0;
    int l=1;
    for(int i=0;i<q.size();i++){
        all+=(q[i]-'0')*l;
        l*=2;
    }
    return all;
}
string combinary(string n,string m){
    long long a=n.size();
    if(m.size()>n.size()){
        a=m.size();
    }
    string gg;
    for(int i=0;i<a;i++){
        if(n[i]=='1' && m[i]=='1'){
            gg[i]='1';
        }
        else{
            gg[i]='0';
        }
    }
    return gg;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    cin>>a>>b;
    long long yzk[100067];
    string qyh[100067];
    long long ones[100067];
    for(int i=0;i<a;i++){
        cin>>yzk[i];
        qyh[i]=binary(yzk[i]);
        ones[i]=num1(qyh[i]);
    }
    string r=qyh[max_element(ones,ones+a)-ones];
    *max_element(ones,ones+a)=0;
    for(long long i=0;i<b-1;i++){
        string r7=qyh[max_element(ones,ones+a)-ones];
        *max_element(ones,ones+a)=0;
        r=combinary(r,r7);
    }
    long long discord=rebinary(r);
    cout<<discord;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
