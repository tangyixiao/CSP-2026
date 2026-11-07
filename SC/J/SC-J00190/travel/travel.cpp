include<bits/std.c++>
using namespace std;
int main{
    freopen("travel.in",'r',stdin);
    int a[12];
    cin<<c1<<s1 <<c2<<s2;
    if(c1==c2){
        cout>>1;
    }
    else{
        cout>>0;
    }
    if(int s1[0]==int s2[0]&&int s1[1]==int s2[1]){
    	cout>>1;
    	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'&&s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
    	cout>>1;
        }
        elif(s1[2]=='D'||s1[2]=='F'&&s2[2]=='D'||s2[2]=='F'){
    	    cout>>1;
	    }
        else{
            cout>>0;
        }
    
    }
    else{
        cout>>0;
    }
    return 0;
}