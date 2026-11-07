#include<bits/stdc++.h>
using namespace std;

int n,p=0,cnt=0;
string s;

struct h{
    int a;
    char c;
};

int main(){
	h x[200001];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x[i].a>>x[i].c;
        for(int j=p;;j++){
            s[j]=x[i].c;
            if(j==x[i].a+p){
                p=j;
                break;
            }
        }
    }
    for(int i=0;i<p/2+1;i++){
        if(s[i]!=s[p-i]){
        	cnt++;
        	s[p-i]=s[i];
		} 
    }
    cout<<cnt;

    return 0;
}
