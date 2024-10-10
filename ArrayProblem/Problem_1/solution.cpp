#include <bits/stdc++.h>

int findSecondLargest(int n, vector<int> &arr) {
    int maximum = INT_MIN;
    vector<int>ans;
    for (int v : arr) {
        if (v > maximum) {
            maximum=v;
        }        
    }
    for (int v : arr) {
        if (v != maximum) {
            ans.push_back(v);
        }        
    }
    int x=INT_MIN;
    if(ans.size()==0)
        return -1;
    for(int i=0;i<ans.size();i++){
        if(ans[i]>x){
            x=ans[i];
        }
    }

    return x; 
}
