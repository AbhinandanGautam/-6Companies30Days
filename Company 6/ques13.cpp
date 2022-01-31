#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(string &a,string &b)
    {
        if(a.size()==b.size())
        {
            return a<b;
        }
        return a.size()<b.size();
    }
    
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        int n=nums.size();
        return nums[n-k];
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> v = {"683339452288515879","7846081062003424420","4805719838","4840666580043","83598933472122816064","522940572025909479","615832818268861533","65439878015","499305616484085","97704358112880133","23861207501102","919346676","60618091901581","5914766072","426842450882100996","914353682223943129","97","241413975523149135","8594929955620533","55257775478129","528","5110809","7930848872563942788","758","4","38272299275037314530","9567700","28449892665","2846386557790827231","53222591365177739","703029","3280920242869904137","87236929298425799136","3103886291279"};

    Solution obj;
    cout<<obj.kthLargestNumber(v,3);

return 0;
}