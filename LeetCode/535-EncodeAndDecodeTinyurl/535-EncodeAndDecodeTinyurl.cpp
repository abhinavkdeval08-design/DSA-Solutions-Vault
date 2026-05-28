// Last updated: 29/05/2026, 00:06:10
class Solution {
public:
    unordered_map<string, string> mp;
    int id = 0;

    string encode(string longUrl) {
        id++; 
        
        string shortUrl = "http://tinyurl.com/" + to_string(id);
        
        mp[shortUrl] = longUrl;
        
        return shortUrl;
    }

    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};