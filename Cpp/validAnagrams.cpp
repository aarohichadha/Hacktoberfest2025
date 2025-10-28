class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int> freq;
        int n = s.length();
        vector<int> arr(26,0);

        for(int i = 0; i<n; i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        bool allZeros = std::all_of(arr.begin(), arr.end(), [](int i){ return i == 0; });
        return allZeros;
    }
};
