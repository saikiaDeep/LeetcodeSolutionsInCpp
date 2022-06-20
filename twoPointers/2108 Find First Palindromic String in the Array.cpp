class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        auto is_palindromic = [](auto &s)
        {
            for (int i = 0, j = s.size() - 1; i < j; ++i, --j)
            {
                if (s[i] != s[j])
                {
                    return false;
                }
            }
            return true;
        };
        for (auto &s : words)
        {
            if (is_palindromic(s))
            {
                return s;
            }
        }
        return "";
        
    }
};