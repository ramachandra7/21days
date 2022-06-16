bool fun(string &s,int l, int r)
{
    if(l>=r)
        return true;
    if(s[l]!=s[r])
        return false;
    return fun(s,l+1,r-1);
}


bool isPalindrome(string &s)
{
	// Write your code here.
    return fun(s,0,s.size()-1);
}
