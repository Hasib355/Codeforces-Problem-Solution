//Codeforces
//Problem No: 71A
//Problem Name : Way Too Long Words

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s.length()>10)
        {
            cout<<s[0]<<s.length()-2<<s [s.length ()-1]<<endl;
        }
        else
            cout<<s<<endl;
    }
    return 0;
}

