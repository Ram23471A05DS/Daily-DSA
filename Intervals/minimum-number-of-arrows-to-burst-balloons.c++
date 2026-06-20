#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findMinArrowShots(vector<vector<int>>& points){
        sort(points.begin(),points.end(),[](vector<int>& a,vector<int>& b){
            return a[1]<b[1];
        });

        int n=points.size();
        int arr=1;
        int lastend=points[0][1];

        for(int i=0;i<n;i++){
            if(points[i][0]>lastend){
                arr++;
                lastend=points[i][1];
            }
        }

        return arr;
    }
};

int main(){
    vector<vector<int>> points={{10,16},{2,8},{1,6},{7,12}};

    Solution obj;
    cout<<obj.findMinArrowShots(points);

    return 0;
}