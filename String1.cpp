// print string with character frequency in sorted  order 
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string str="neerajchoubisa";
    int count[26]={0};

    for(int i=0;i<str.length();i++)
    {
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        
        cout<<char(i+'a')<<" "<<count[i]<<endl;
        
    }

    return 0;
}