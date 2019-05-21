/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/encode-and-decode-tinyurl/
*/

class Solution {
public:

    vector<char> v;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        time_t timenow = time(nullptr);
        string prefix = "http://tinyurl.com/";
        for (int i=0; longUrl[i]; i++)
        {
            int a = (int)timenow - (char)longUrl[i];
            v.push_back(a);
        }
        stringstream urlHash;
        urlHash << timenow;
        string s = urlHash.str();
        return prefix + s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string timehash = "";
        for (int i=19; shortUrl[i]; i++)
            timehash += shortUrl[i];
        int a = stoi(timehash);
        string origUrl = "";
        for (int i=0; i<v.size(); i++)
            origUrl += (char)(a - v[i]);
        return origUrl;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
