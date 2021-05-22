#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,T=1,n,k;
    string s;
    for(cin>>t;t--;){
        printf("Case #%d: ",T++);
        cin>>n>>s;
        for(i=0;i<2*n-2;i++){
            if(s[i]=='S')cout<<'E';
            if(s[i]=='E')cout<<'S';
        }
        cout<<endl;
    }
}
/*
2
2
SE
5
EESSSESE
*/

