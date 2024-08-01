#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    map<string,int> mp;

    int n=s.length();
    int i=0;
    while(i<n){
        int j=i;
        string str="";
        while(j<n && ((s[j]>='a' &&  s[j]<='z') || (s[j]>='0' && s[j]<='9')  || (s[j]>='A' && s[j]<='Z')))
        {
           str+=s[j];
           j++;
        }

        mp[str]++;

        i=j+1;
    }

    for(auto x : mp)
    {
        cout<<x.first<< " "<<x.second<<endl;
    }

    return 0;
}