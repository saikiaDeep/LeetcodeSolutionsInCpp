class Solution {
public:
    vector<int> diStringMatch(string s) {
        // vector<int> storeNumbers;
        // for(int i=0;i<=s.size();i++)
        // {
        //     storeNumbers.push_back(i);
        // }
        vector<int> result;
        int a=0;
        int b=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                result.push_back(a++);
            }
            else
            {
                result.push_back(b--);
            }
        }
                result.push_back(a);
        
        return result;

    }
};
