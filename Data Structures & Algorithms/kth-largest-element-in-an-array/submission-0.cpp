class Solution {
private:
    priority_queue<int,vector<int>,greater<int>> minheap;
    int k;
public:
    int findKthLargest(vector<int>& nums, int k) {
        this->k=k;
        for(int num:nums){
            minheap.push(num);
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        return minheap.top();
    }
};
