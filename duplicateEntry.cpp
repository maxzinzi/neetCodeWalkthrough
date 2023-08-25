//https://leetcode.com/problems/contains-duplicate/

bool containsDuplicate(vector<int>& nums) {
    unordered_set < int > hashmap;
    for(int i = 0; i < nums.size(); i++) {
        if(hashmap.find(nums.at(i)) != hashmap.end()) {
            return true;
        }
        hashmap.insert({nums.at(i)});
    } 
    return false;
}

