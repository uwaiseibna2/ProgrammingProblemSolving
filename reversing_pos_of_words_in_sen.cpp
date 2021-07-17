#include<bits/stdc++.h>

using namespace std;
main()
{
    string sentence;
    getline(cin,sentence);
    string ret = "";
    string tot = "";
    for(int i=sentence.length()-1;i>=0;i--)
    {
    
        if(sentence[i]==' ')
        {
            tot+= ret+" ";
            ret= "";
            continue;
        }
        ret=sentence[i]+ret;
        if(i== 0)
        {
            tot += ret;
        }
    }
    cout<<tot;
}