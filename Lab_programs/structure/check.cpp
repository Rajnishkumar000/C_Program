#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long sum)
    {
        vector<int> subarr;
        
        long long currsum = 0;
        int i=0,j = 0;
        
        while(i<n && j<n && currsum!=sum)
        {
             
            if(currsum>sum)
            {
                currsum-=arr.at(j++);
                continue;
            }
            if(currsum<sum)
            {
                currsum+=arr.at(i++);
            }
            
           
        }
        if(currsum==sum)
        {
            subarr.push_back(j+1);
            subarr.push_back(i);
        }
        else{
            subarr.push_back(-1);
        }
        
        return subarr;
    }
};

int main()
{
    Solution* s = new Solution();
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    
    vector<int> res = s->subarraySum(v,v.size(),12);
    for(int i: res)
    {
        cout<<i<<" ";
    }

}