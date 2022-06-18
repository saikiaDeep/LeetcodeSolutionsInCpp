class Solution {
public:
    int balancedStringSplit(string s) {
        int result =0;
        int count=0;
        for(const auto& c: s)
        {
            if(c=='L')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                result++;
            }
        }
        return result;
    }
};
//using stack
class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        stack <int> stack;
        for(int i=0;i<s.length();i++)
        {
            if(!stack.empty() and stack.top()!=s[i])
            {
                stack.pop();
                if(stack.empty()) count++;
            }
            else stack.push(s[i]);
        }
        return count;
    }
};
