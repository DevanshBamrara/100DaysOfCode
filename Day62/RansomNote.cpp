class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0;i<ransomNote.size();i++){
            std::size_t found = magazine.find(ransomNote[i]);
            if (found==std::string::npos)
                return false;
            else
                magazine.erase(magazine.begin() + found);
        }
        return true;
    }
};