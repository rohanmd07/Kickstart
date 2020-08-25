#include <bits/stdc++.h>

using namespace std;

void highBuildings(int N,int A,int B,int C)
{
    
    if( A+B-C > N)
    {
        cout<<"IMPOSSIBLE";
        return;
    }
    
    if(C>1)
    {
        int p = N-1;
        int q = N;
        
        for(int i=0;i<(A-C);i++){
            cout<<p<<" ";
        }
        cout<<q<<" ";
        for(int i=0;i<(N-A-B+C);i++){
            cout<<p<<" ";
        }
        for(int i=0;i<(C-1);i++){
            cout<<q<<" ";
        }
        for(int i=0;i<(B-C);i++){
            cout<<p<<" ";
        }
        return;
    }
    else
    {
        if((A+B-C)==N)
        {
            int p = N-1;
            int q = N;
            for(int i=0;i<(A-C);i++){
              cout<<p<<" ";
            }
            cout<<q<<" ";
            for(int i=0;i<(B-C);i++){
                cout<<p<<" ";
            }
            return;   
        }
        else
        {
            if(A>1 || B>1)
            {
                int q = N;
                int p = N-1;
                int r = N-2;
                if(A==1)
                {
                    for(int i=0;i<(A-C);i++)
                    {
                       cout<<p<<" ";
                    }
                    cout<<q<<" ";
                    for(int i=0;i<(N-A-B+C);i++)
                    {
                       cout<<r<<" ";
                    }
                    for(int i=0;i<(B-C);i++)
                    {
                       cout<<p<<" ";
                    }
                    return;
                }
                else
                {
                    for(int i=0;i<(A-C);i++)
                    {
                       cout<<p<<" ";
                    }
                    for(int i=0;i<(N-A-B+C);i++)
                    {
                       cout<<r<<" ";
                    }
                    cout<<q<<" ";
                    for(int i=0;i<(B-C);i++)
                    {
                       cout<<p<<" ";
                    }
                    return;
                }
            }
            else
            {
                cout<<"IMPOSSIBLE";
                return;
            }
        }
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int N,A,B,C;
        cin>>N>>A>>B>>C;
        cout<<"Case #"<<k+1<<": ";
        highBuildings(N,A,B,C); 
        cout<<"\n";
    }
}