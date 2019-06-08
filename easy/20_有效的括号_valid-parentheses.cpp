class Solution {
public:
    bool isValid(string s) {
       // if (s.length() % 2 == 1) return false;
       // if (s.length() == 0) return true; 
       stack<char> stk;
        for(char c : s) {
            switch(c) {
                case '{' :
                case '(' :
                case '[' : stk.push(c); break;
                case '}' : if (stk.empty() || stk.top() != '{') return false; else stk.pop(); break;
                case ']' : if (stk.empty() || stk.top() != '[') return false; else stk.pop(); break;
                case ')' : if (stk.empty() || stk.top() != '(') return false; else stk.pop(); break;
                default : ;
            }
        }
        return stk.empty();
    }
};