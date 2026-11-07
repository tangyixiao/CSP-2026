#include<bits/stdc++.h>
using namespace std;

bool Check(char a){
	if(a=='A'||a=='B'||a=='C'){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

string c1,c2,s1,s2;
cin>>c1>>s1>>c2>>s2;
char z1=s1[2],z2=s2[2];
int b[5]={0,0,0,0,0};
if(c1==c2){
    b[1]=1;
    if(s1.substr(0,2)==s2.substr(0,2)){
        b[2]=1;
        if(Check(z1)==Check(z2)){
            b[3]=1;
            if(z1+1==z2||(char)(z1-1)==z2){
                b[4]=1;
            }
        }
    }
}
for(int i=1;i<=4;i++){
    cout<<b[i];
}
    return 0;
}
