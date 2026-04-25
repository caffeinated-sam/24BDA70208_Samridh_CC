class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        if(s.size()==1) return false;
        for(char i:s){
            if(i=='(' || i=='{' || i=='[') a.push(i);
            else{
                if(a.empty()) return false;

                if(i==']' && a.top()=='[') a.pop();
                else if(i=='}' && a.top()=='{') a.pop();
                else if(i==')' && a.top()=='(') a.pop();
                else return false;
            }
        }
        return a.empty();
    }
};