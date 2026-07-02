class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> ans;
        
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++) {
            vector<int> freq(26, 0);
            for (char ch : strs[i]) {
                freq[ch - 'a']++;
            }

            string s = "";

            for (int x : freq) {
                s += to_string(x)+"#";
            }
            if (mp.find(s) != mp.end()) {
                auto it = mp.find(s);
                it->second.push_back(strs[i]);
            } else {
                mp[s].push_back(strs[i]);
            }
        }
        for (auto pair : mp) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};