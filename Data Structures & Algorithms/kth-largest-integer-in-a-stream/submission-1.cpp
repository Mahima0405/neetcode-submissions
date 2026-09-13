class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> hp;
    int maxsize=0;
    KthLargest(int k, vector<int>& nums) {
        maxsize= k;
        for(int i=0; i<nums.size(); i++)
        {
            if(hp.size() == maxsize)
            {
                if(hp.top() < nums[i])
                {
                    hp.pop();
                    hp.push(nums[i]);
                }
            }
            else{
                hp.push(nums[i]);
            }
        }
    }
    
    int add(int val) {
        if(hp.size() == maxsize){
            if(hp.top() < val)
            {
                hp.pop();
                hp.push(val);
            }
        }
        else hp.push(val);
        return hp.top();
    }
};
