#include<iostream>
#include<string>
#include<vector>
class Solution {
public:
std::string convertToTitle(int columnNumber) {
    std::string s;
    while(columnNumber>0){
        int reminder=(columnNumber-1)%26;
        s=(char(65+reminder))+s;
        columnNumber=(columnNumber-1)/26;
    }
    return s;
}
};
