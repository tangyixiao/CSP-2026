#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string l1="ABC",l2="DF";
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
        cout<<1;
        string sr="";
        sr+=s1[0];
        sr+=s1[1];
        string sx="";
        sx+=s2[0];
        sx+=s2[1];
        if(sr==sx){
            cout<<1;
            bool r=false,x=false;
            int posr=0,posx=0;
            for(int i=0;i<=2;i++){
                if(l1[i]==s1[2]){
                    r=true;
                    posr=i+1;
                }
                if(l1[i]==s2[2]){
                    x=true;
                    posx=i+1;
                }
            }
            if(r==x){
                cout<<1;
                if(r==false){
                    cout<<1;
                }else if(abs(posr-posx)==1){
                    cout<<1;
                }else{
                    cout<<0;
                }
            }else{
                cout<<00;
            }
        }else{
            cout<<000;
        }
    }else{
        cout<<0000;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
