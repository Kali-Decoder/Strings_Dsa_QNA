// string pallindrom question naive and better soliution 
#include<bits/stdc++.h>
using namespace std;
bool method2(string &s)
{
    int start=0; int end=s.length()-1;
    while(start<end)
    {
        if(s[start]!=s[end])
        {
            return false;
        }
        start++,end--;
    }
    return true;
}
int main()
{   
    string str="neen";
    string res="";
    for(int i=str.length()-1;i>=0;i--)
    {
        res+=str[i];
        
    } //or we use reverse(str.begin(),str.end);
    if(str==res)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


    return 0;
}