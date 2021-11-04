// left most character repeating 

#include<bits/stdc++.h>
using namespace std;
int left_most(string s1)
{
    for(int i=0;i<s1.length();i++)
    {
        for(int j=i+1;j<s1.length();j++)
        {
           if(s1[i]==s1[j]) 
           return i;
        }
    }
}
int main()
{   
    cout<<left_most("neeraj");
    return 0;
}