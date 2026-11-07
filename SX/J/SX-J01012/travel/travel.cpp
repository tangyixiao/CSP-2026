#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
   string c1;
   cin>>c1;
   char s1[101];
   for(int i=1;i<=3;i++){
   	cin>>s1[i];
   }
    string c2;
    cin>>c2;
    char s2[101];
    for(int i=1;i<=3;i++){
    	cin>>s2[i];
	}
        if(c1!=c2)
        {
            cout<<0<<0<<0<<0;
        }
        if(c1==c2)
        {
        	for(int i=1;i<=3;i++){

            if(s1[2]!=s2[2])
            {
                cout<<1<<0<<0<<0;
            }
            if(s1[2]==s2[2])
            {
                if(s1[3]=="A"&&s2[3]=="B"||s1[3]=="B"&&s2[3]=="C"||s1[3]=="D"&&s2[3]=="F")
                {
                    cout<<1<<1<<1<<1;
            }
            if(s1[3]=="A"&&s2[3]=="C")
            {
                cout<<1<<1<<1<<0;
            }
            if(s1[3]=="A"&&s2[3]=="D"||s1[3]=="A"&&s2[3]=="F"||s1[3]=="B"&&s2[3]=="D"||s1[3]=="B"&&s2[3]=="F")
            {
                cout<<1<<1<<0<<0;
            }

        }
    }
}
    return 0;
}