class Solution {
public:
    int maximum69Number (int num) {
        string a = to_string(num);
        for(char& b:a){
            if(b == '6'){
                b = '9';
                break;
            }
        }
        return stoi(a);// convert string to integer
        
    }
};