#include<iostream>
using namespace std;
struct seat{
    string num;
};
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int r_number,x_number;
    string r_seat,x_seat;//set bianliang
    cin>>r_number>>r_seat>>x_number>>x_seat;
    if(r_number!=x_number)//if it is in the same train box
    {
        cout<<"0000";
    }
    else
    {
        cout<<"1";
        if(r_seat[0]==x_seat[0]&&r_seat[1]==x_seat[1])//if it is in one line
        {
            cout<<"1";
            if(((r_seat[2]=='A'||r_seat[2]=='B'||r_seat[2]=='C')&&(x_seat[2]=='A'||x_seat[2]=='B'||x_seat[2]=='C'))||((r_seat[2]=='D'||r_seat[2]=='F')&&(x_seat[2]=='D'||x_seat[2]=='F')))
            {
                cout<<"1";
                if(r_seat[2]-x_seat[2]==1||r_seat[2]-x_seat[2]==-1)
                {
                    cout<<"1";
                }
                else
                {

                    cout<<"0";
                }
            }
            else{
                cout<<"00";
            }
        }
        else{
            cout<<"000";
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
