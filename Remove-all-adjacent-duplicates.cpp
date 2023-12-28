#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="aaaaaa";
    if(s.length()==1)
            cout<< s;
            for(int i=0;i+1<s.length();i++)
            {
                if(s[i]==s[i+1])
                {
                    s.erase(i,2);
                    i--;
                    i--;
                }

                if(i==-2)
                i=-1;
                
            }
       cout<<s;

}