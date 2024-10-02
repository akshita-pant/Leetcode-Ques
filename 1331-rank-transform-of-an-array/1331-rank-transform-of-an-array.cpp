/*class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortarr(arr); //to strore sorted array
        map<int, int> store_rank; //to store ranks

        sort(sortarr.begin(), sortarr.end());
        int rank =1;
        for(int i=0 ; i< sortarr.size(); i++)
        {
            if(i>0 && sortarr[i]>sortarr[i-1]) //yaha se rank nikalo
            { rank++; }
            store_rank[sortarr[i]]= rank; //yaha rank store kar lo
        }

        for(int i=0; i<arr.size(); i++)
        {
            arr[i]= store_rank[arr[i]]; //ranks can now replace arr elements
        }
        return arr;
    }
};*/

// or we can use set...will reduce duplicates and so reduce some complexity due to space ..sort function extra b ni lagega

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> numset(arr.begin(), arr.end()); //to strore sorted array
        map<int, int> store_rank; //to store ranks
        int rank =1;
        for(auto num: numset)
        {
            store_rank[num]= rank;
            rank++;
        }

        for(int i=0; i<arr.size(); i++)
        {
            arr[i]= store_rank[arr[i]]; //ranks can now replace arr elements
        }
        return arr;
    }
};