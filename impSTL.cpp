
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
//imp : use emplace instead of push_back and insert as it takes some less time
// some methods that are used daily are size(), erase(), find(), count()
    
//VECTOR
//collection which can extend even after declaration unlike array
 vector<int>v(5,10);
 
 for(auto it:v)// here it is value itself
 {
     cout<<it<<" ";
 }
 cout<<endl;
 
 for(auto it=v.begin();it!=v.end();it++)// here it is a pointer to the array element
 {
     cout<<*it<<" ";
 }
 cout<<endl;
 
 
 //.............................................
 
 
 
//  SET   
// set -> any operation O(logn) , n=size of set,  used : unique elements, to be stored in sorted order in every traversal

    
    set<int>s;
    s.insert(1);
    s.insert(45);
    s.insert(1);
    s.emplace(23);
    for(auto it:s)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    
    
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    


// ....................................



// UNORDERED_SET
// unordered_set -> O(1) for every case except worst case that occurs once in lifetime, So this is used regularly in CP, not stored in sorted order
    
    
    unordered_set<int>unorder;
    unorder.insert(1);
    unorder.insert(45);
    unorder.insert(1);
    unorder.emplace(23);
    for(auto it:unorder)
    {
        cout<<it<<" ";
    }
    cout<<"\n";

//.................................................


//MULTI_SET
// sorted but all the occurences exist in this 

    multiset<int>ms;
    ms.insert(1);
    ms.insert(45);
    ms.insert(1);
    ms.emplace(23);
    for(auto it:ms)
    {
        cout<<it<<" ";
    }
    cout<<"\n";

//  MAP
// map :  key->value O(logn) , sorted

    map<string,int>mp;
    mp["a"]=1;
    mp.emplace("p",23);
    mp["h"]=5;
    for(auto it:mp)// here it is one pair holding key and value
    {
        cout<<it.first<<"->"<<it.second<<" ";
    }
    cout<<"\n";
    
    for(auto it=mp.begin();it!=mp.end();it++) // here it is a pointer to object
    {
        cout<<it->first<<"->"<<it->second<<" ";
    }
    cout<<endl;


// UNORDERED_MAP
//unordered_map -> same as map but not sorted, O(1) in most cases, so this is used generally


	// Pair class
	pair< pair<int,int>, int> pr = {{1,2}, 2}; 
	cout << pr.first.second << endl;

 
 
 // USECASES WITH PAIR
	vector<pair<int,int>> vec; 
	set<pair<int,int>> st; 
	map< pair<int,int>, int> mpp; 
// we cannot use pairs with unordered_map and unordered_set 
 
 // MULTIMAP 
	multimap<string, int> mup;
	mup.emplace("raj", 2); 
	mup.emplace("raj", 5); 
     
    for(auto it:mup)
    {
        cout<<it.first<<"->"<<it.second<<" ";
    }
    cout<<"\n";




return(0);
}
