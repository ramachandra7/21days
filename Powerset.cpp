vector<vector<int>> fun(vector<int>v,int i)
{
    int k;
    if(i==0)
        return {{},{v[0]}};
   vector<vector<int>> partial=fun(v,i-1); 
    vector<vector<int>> final;
    for(k=0;k<partial.size();k++)
    {
        final.push_back(partial[k]);
    }
     for(k=0;k<partial.size();k++)
    {
         partial[k].push_back(v[i]);
        final.push_back(partial[k]);
    }
    return final;
}

vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    return fun(v,v.size()-1);
}
