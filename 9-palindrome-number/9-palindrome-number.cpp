#include <cstdint>
#include <string>
using std::string;

class Solution {
public:
    bool isPalindrome(int x) {

        string pal = to_string(x);
        int index = 0;
        int i = 0;
        
        if (pal[0] == '-')
            return false;
        
        // even number
        if(pal.length() % 2 == 0)
        {
            index = pal.length() - 1;
            i = 0;
            while(index != (pal.length()/2))
            {
                if(pal[i] == pal[index])
                {
                    index -= 1;
                    i += 1;
                    if(index == pal.length()/2)
                        break;
                    else
                    {
                        if(i < pal.length())
                            continue;
                        else 
                            return -1;
                    }
                 }
                else
                   return false;
            }   
            
            if(i >= pal.length())
                return -1;
                            
            if(pal[index-1]==pal[index])
                return true;
            else
                return false;
        }
        
        // odd number
        else
        {
            index = pal.length() - 1;
            i = 0;
            while(index != (pal.length()+1)/2)
            {
                if(pal[i] == pal[index])
                {
                    index -= 1;
                    i += 1;
                    if(i < pal.length())
                        continue;
                    else 
                        return -1;
                }
                else
                    return false;
            }
            
            if(i >= pal.length())
                return -1;
            
            if(pal[index]==pal[i])
                return true;
            else
                return false;
        }
    }
};