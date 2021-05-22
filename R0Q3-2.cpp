#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T=1,t,ic,m,k,n,i,j,N,temp,arr[102],brr[102],crr[102],p;
    for(cin>>t;t--;){
        map<int,char>mp;
        mp.clear();

        cin>>N>>k;
        cin>>p;
        for(m=2;m<=sqrt(p);m++)if(p%m==0)break;
        arr[0]=m;arr[1]=p/m;
        for(i=2;i<k+1;i++){cin>>p;arr[i]=p/arr[i-1];}

        for(i=0;i<k+1;i++)brr[i]=arr[i];
        for(i=0;i<k+1;i++)for(j=i+1;j<k+1;j++)if(brr[i]>brr[j])temp=brr[i],brr[i]=brr[j],brr[j]=temp;


        for(i=1,m=0,brr[k+1]=INT_MAX,temp=brr[0];i<=k+1;i++)if(temp<brr[i]){crr[m++]=temp;temp=brr[i];}

        for(i=0;i<26;i++)mp[crr[i]]=(char)('A'+i);

        cout<<"Case #"<<T++<<": ";for(i=0;i<=k;i++)cout<<mp[arr[i]];cout<<endl;
    }
}

/*
2
103 31
217 1891 4819 2291 2987 3811 1739 2491 4717 445 65 1079 8383 5353 901 187 649 1003 697 3239 7663 291 123 779 1007 3551 1943 2117 1679 989 3053
10000 25
3292937 175597 18779 50429 375469 1651121 2102 3722 2376497 611683 489059 2328901 3150061 829981 421301 76409 38477 291931 730241 959821 1664197 3057407 4267589 4729181 5335543


*/

