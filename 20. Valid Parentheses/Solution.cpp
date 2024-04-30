#include<string>
#include<iostream>
#include<stack>
class Solution {

public:
    Solution(){};
    bool isValid(std::string s) {
        std::stack<char> stack;
        for(auto it:s){
            if(it=='(' ||it=='{' ||it=='['){
                stack.push(it);
            }
            else{
                switch (it)
                {
                case ')':
                    if(stack.top()=='(')stack.pop();
                    else return false;
                    break;
                case ']':
                    if(stack.top()=='[')stack.pop();
                    else return false;
                    break;
                case '}':
                    if(stack.top()=='{')stack.pop();
                    else return false;
                    break;
                }
            }
        }
        return stack.empty()?true :false;
        
    }
};

int main()
{
    std::string s="()[]{}";
    Solution it = Solution();
    std::cout<<it.isValid(s)<<std::endl;
    return 0;
}