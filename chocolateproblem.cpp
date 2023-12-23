#include <bits/stdc++.h>
#include<vector>
int findMinDiff(int n, int m, vector<int> chocolates) {
    if(n==0||m==0){
        return 0;
    }
    sort(chocolates.begin(),chocolates.end());
    if(n<m){
        return -1;
    }
    int i;
    int min_diff = INT_MAX;
    for(i=0;i<n-m+1;i++){
        int min = chocolates[i];
        int max = chocolates[i+m-1];
        int gap = max-min;
        if(gap<min_diff){
            min_diff = gap;
        }
    }
    return min_diff;
}
