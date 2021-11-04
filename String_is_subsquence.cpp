// subsequence of string 
#include<bits/stdc++.h>
using namespace std;
bool sub_sequence(string &s1 ,string &s2)
{   int j=0;
    for(int i=0;i<s1.length() && j<s2.length();i++)
    {
        if(s1[i]==s2[j])
        j++;
    }
    return (s2.length()==j);
}
int main()
{   
    string s1="neeraj";
    string s2="ner";
    cout<<sub_sequence(s1,s2);
    return 0;
}