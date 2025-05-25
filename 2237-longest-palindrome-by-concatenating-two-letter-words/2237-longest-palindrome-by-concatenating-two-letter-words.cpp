#include<unordered_map>
#include <string>
class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        // iska soln jarur dekhna
        //iss code ko aache se likhna
        
        unordered_map<string,pair<int, bool>>map;
        pair<int, bool>pr;
        int len = 0;
        // push all string in map
        for(int i=0; i<words.size(); i++)
        {
            if(map.count(words[i]) != 0)
            {
                map[words[i]].first++;
            }
            else
            {
                pr.first = 1;
                pr.second = false;
                map[words[i]] = pr;
            }
        }
        //itrate in words array
        bool check = true;
        for(int i=0; i<words.size(); i++)
        {
            string str = words[i];
            reverse(str.begin(), str.end()); // revere is a void ftn
            if(words[i] == str  && map[words[i]].second == false)
            {
                pr = map[words[i]];
                if(check == true  && (pr.first % 2 == 1)) 
                {
                    len += pr.first * 2;
                    check = false;
                }
                else
                {
                    if(pr.first % 2 == 0) len += pr.first * 2;
                    
                    else len += (pr.first - 1) * 2; 
                }
                
                pr.second = true;
                map[words[i]] = pr;
            }
            else if(map[words[i]].second == false  && map.count(str))
            {
                pr = map[words[i]];
                pair<int, bool>pr1;
                pr1 = map[str];
                
                int x = min(pr.first, pr1.first);
                
                len += x * 4;
                
                pr.second = true;
                map[words[i]] = pr;
                pr1.second = true;
                map[str] = pr1;  
            }
        }
        return len;
    }
};