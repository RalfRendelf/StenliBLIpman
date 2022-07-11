#pragma once
#include <iostream>
using namespace std;
class Solution{

public:
    string longestPalindrome(string s) {
        string str = "", str2 = "";
        if (s.empty())
            return "";
        if (s.size() == 1)
            return s;
        for (auto a = 0; a < s.size(); a++) {
            for (auto i = 1; a < s.size() - i; ++i)
            {
                if (s[s.size() - i] == s[a])
                {
if ((s.size() - i - a) <= str2.size() && s.size() * 0.8 <= str2.size())
   continue;
   for (int h = a; h <= (s.size() - i); ++h)
       str.push_back(s[h]);
   //break;


   for (int g = 0; g < (str.size()) / 2; g++)
   {
       if (str[g] != str[str.size() - 1 - g]/* && str.size() != 1*/)
       {
           str = "";
           break;
       }
   }
   if (str2.size() < str.size()) {
       str2 = str;
   }
     if (s.size() == str2.size())
       return str2;
   str = "";
}
}
}
if (str2.empty())
    return str2 = s[0];
return str2;

}
};
