class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> stone;

        for(auto it: stones)
        {
            stone.push(it);
        }

        while(!stone.empty())
        {
            if(stone.size() == 1)
            {
                return stone.top();
            }

            int stone1= stone.top();
            stone.pop();
            int stone2= stone.top();
            stone.pop();

            if(stone1 == stone2)
            {
                continue;
            }
            else{
                stone.push(abs(stone1-stone2));
            }
        }

        return 0;
    }
};
