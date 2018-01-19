#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[4][4],i,j,k;
        vector< pair<int,int> >vp1;
        vector< pair<int,int> >vp2;
        vector< pair<int,int> >vp3;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            cin>>a[i][j];
        }
        for(i=0;i<3;i++)
        {
            vp1.push_back(make_pair(a[0][i],i));
            vp2.push_back(make_pair(a[1][i],i));
            vp3.push_back(make_pair(a[1][i],i));
        }
        sort(vp1.begin(),vp1.end());
        sort(vp2.begin(),vp2.end());
        sort(vp2.begin(),vp3.end());
        int ans=0;
        for(i=0;i<3;i++)
        {
            if(vp1[i].second!=vp2[i].second || vp1[i].second!=vp3[i].second || vp2[i].second!=vp3[i].second)
            ans=1;
        }
        if(ans==1)
        printf("no\n");
        else
        printf("yes\n");
    }
    return 0;
}
