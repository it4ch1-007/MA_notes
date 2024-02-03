#include <bits/stdc++.h>

using namespace std;

int check(vector<int> vec,int n)
{
    for(int i=0;i<vec.size();i++)
    {
        if(n==vec[i])
            return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec1,vec2,vec3;
        while(n--)
        {
        int a,b;
        cin>>a>>b;
        switch(a){
            case 1:
                vec2.push_back(b);
                break;
            case 2:
                vec1.push_back(b);
                break;
            case 3:
                vec3.push_back(b);
                break;

        }
        }
        for(int j=0;j<vec1.size();j++)
        {
            // cout<<vec2[j]<<endl;
            // cout<<"hello"<<endl;
        }
        int max,min;
        max=*max_element(vec1.begin(),vec1.end());
        min=*min_element(vec2.begin(),vec2.end());
        cout<<"max="<<max<<endl;
        cout<<"min="<<min<<endl;
        if(max<min)
        {
            cout<<0<<endl;
        }
        int cnt=0;
        for(int i=min;i<max+1;i++)
        {
            if(!check(vec3,i))
                cnt++;
        }
        cout<<cnt<<endl;
    }
}