class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int curr = 0;
        for (int i = 0; i < s.length(); i++)
        {
            for (int c = i; c < s.length(); c++)
            {
                if (s.find(s[c], i) == c)
                {
                    curr = max(curr, (c + 1) - i);
                } else {
                    break;
                }
            }
        }
        return curr;
    }
};
