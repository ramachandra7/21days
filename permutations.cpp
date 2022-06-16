#include<bits/stdc++.h>
void fun(string &s,int pos,vector<string> &ans)
{
    if(pos>=s.length())
        ans.push_back(s);
    for(int i=pos;i<s.length();i++)
    {
        swap(s[pos],s[i]);
        fun(s,pos+1,ans);
        swap(s[pos],s[i]);
    }
}


vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    fun(str,0,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
