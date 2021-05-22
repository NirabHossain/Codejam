#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T=1,t,ic,m,k,n,i,j,N,temp,arr[102],brr[102],crr[102];
    for(cin>>t;t--;){
        cin>>N>>k;
        string a,b,c;
        cin>>a;b=' ';
        for(m=2;m<=pow(10,(a.size()/2)+1);m++){
            for(i=0,n=0;i<a.size();i++){
                n=10*n+a[i]-48;
                n=n%m;
            }
            if(n==0)break;
        }




        for(i=0,n=0;i<a.size();i++){
            if(a[i]=='-')continue;
            n=10*n+a[i]-48;
            b=b+(char)(n/m+'0');
            n=n%m;
        }
        arr[0]=m;
        stringstream tr(b);
        tr>>arr[1];
//Again in the loop
        for(j=1;j<k;j++){
            m=arr[j];
            cin>>a;b=" ";
            for(i=0,n=0;i<a.size();i++){
                n=10*n+a[i]-48;
                b=b+(char)(n/m+'0');
                n=n%m;
            }
            stringstream tr(b);
            tr>>arr[j+1];
        }
        for(i=0;i<k+1;i++)brr[i]=arr[i];
        for(i=0;i<k+1;i++){//Sorting
            for(j=i+1;j<k+1;j++){
                if(brr[i]>brr[j])
                    temp=brr[i],brr[i]=brr[j],brr[j]=temp;
            }
        }
        for(i=1,m=0,brr[k+1]=INT_MAX,temp=brr[0];i<=k+1;i++)if(temp<brr[i]){crr[m++]=temp;temp=brr[i];}

        map<int,char>mp;
        for(i=0;i<m;i++)mp[crr[i]]=(char)('A'+i);

        cout<<"Case #"<<T++<<": ";for(i=0;i<=k;i++)cout<<mp[arr[i]];cout<<endl;

        mp.clear();
    }
}

/*
1 1 217
1
987952300
5
2
103 31
217 1891 4819 2291 2987 3811 1739 2491 4717 445 65 1079 8383 5353 901 187 649 1003 697 3239 7663 291 123 779 1007 3551 1943 2117 1679 989 3053
10000 25
3292937 175597 18779 50429 375469 1651121 2102 3722 2376497 611683 489059 2328901 3150061 829981 421301 76409 38477 291931 730241 959821 1664197 3057407 4267589 4729181 5335543


*/

