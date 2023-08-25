//https://leetcode.com/problems/valid-anagram/

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;

    unordered_map < char, int > s_hashmap;
    unordered_map < char, int > t_hashmap;

    for(int i = 0; i < s.length(); i++) {
        s_hashmap[s[i]]++;
        t_hashmap[t[i]]++;
    }
    if(s_hashmap != t_hashmap) {
        return false;
    }
    return true;
}

