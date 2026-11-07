#include<bits/stdc++.h>
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]==d[0] && b[1]==d[1]){
			cout<<1;
			if((b[2]=='F' || b[2]=='D')==(d[2]=='F' || d[2]=='D')){
				cout<<1;
				if(abs(b[2]-d[2])==1 || (b[2]=='D' && d[2]=='F')){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000"; 
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
/*

from random import randint as rd
from os import system
from time import sleep
def ne():
    f=open("travel.in","w")
    a=str(rd(0,1))
    if a=='1':
        a+=str(rd(0,2))
    else:
        a+=str(rd(1,3))
    c=a
    abc=['B','C','D','F']
    b=str(rd(0,1))
    if a=='1':
        b+=str(rd(7,8))
    else:
        b+=str(rd(1,3))
    b+=abc[rd(0,3)]
    d=str(rd(0,1))
    if a=='1':
        d+=str(rd(7,8))
    else:
        d+=str(rd(1,3))
    d+=abc[rd(0,3)]
    f.write(a+' '+b+' '+c+' '+d)
    f.close()
    return a+' '+b+' '+c+' '+d
def ce():
    system("start ./travel.exe")
    sleep(0.1)
    f=open("travel.out","r")
    a=f.readline()
    f.close()
    return a
def main():
    print(ne())
    print(ce())
if __name__=="__main__":
    for i in range(100):
        main()

*/
