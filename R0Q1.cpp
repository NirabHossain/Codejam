#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,T=1,j,k;
    string s,a,b;
    for(cin>>t;t--;){
        cin>>s;a=b=s;
        for(i=0;i<s.size();i++){
            k=((s[i]-'0')/2);
            j=(s[i]-'0'-k);
            if(k==4 ||j==4)k+=2,j-=2;
            a[i]=k+'0';b[i]=j+'0';

        }




/*
1
60321548974653283
*/
        cout<<"Case #"<<T++<<": ";
        for(i=0;i<s.size();i++)cout<<a[i];cout<<" ";
        for(i=0;i<s.size();i++)cout<<b[i];cout<<endl;
    }
}
