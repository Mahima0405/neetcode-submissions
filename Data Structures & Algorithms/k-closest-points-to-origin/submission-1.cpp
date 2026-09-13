class Solution {
public:
    struct comparator{
        bool operator()(vector<int> a1, vector<int> a2){
            return (a1[0]*a1[0] + a1[1]* a1[1]) > (a2[0]*a2[0] + a2[1]*a2[1]);
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>, vector<vector<int>>, comparator> minheap;

        for(auto it: points)
        {
            minheap.push(it);
        }

        vector<vector<int>> res;
        while(k != 0 && !minheap.empty())
        {
            k--;
            res.push_back(minheap.top());
            minheap.pop();
        }

        return res;
    }
};


/*class Solution {
public:

    /*struct comparator {
        bool operator()(const vector<int>& a1, const vector<int>& a2) {
            return (a1[0] * a1[0] + a1[1] * a1[1]) >
                   (a2[0] * a2[0] + a2[1] * a2[1]);
        }
    };

    

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<
            vector<int>,
            vector<vector<int>>,
            comparator
        > minheap;

        for (auto it : points) {
            minheap.push(it);
        }

        vector<vector<int>> res;

        while (k != 0 && !minheap.empty()) {
            k--;
            res.push_back(minheap.top());
            minheap.pop();
        }

        return res;
    }
};*/