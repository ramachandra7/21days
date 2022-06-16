#include<bits/stdc++.h>
void fun(vector<int> &arr, int pos,vector<vector<int>> &ans)
{
    if(pos>=arr.size())
        ans.push_back(arr);
    set<int>s;
    for(int i=pos;i<arr.size();i++)
    {
        if(s.find(arr[i])==s.end())
        {
            s.insert(arr[i]);
            swap(arr[i],arr[pos]);
            fun(arr,pos+1,ans);
            swap(arr[i],arr[pos]);
        }
    }
}

vector<vector<int> > uniquePermutations(vector<int> &arr, int n) {
	// Write your code here.
    vector<vector<int>> ans;
    fun(arr,0,ans);
    return ans;
}
