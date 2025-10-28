class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26];
        for(auto c : s){
            arr[c-'a']++;
        }
        for(char c : t){
            arr[c-'a']--;
            if(arr[c-'a'] == -1) return c;
        }
        return 'a';
    }
};
