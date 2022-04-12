class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
                std::map<string, std::vector<string>> myMap;
        std::vector<std::vector<string>> resultVector;
        
        for(auto word : strs)
        {
            
            auto tempWord = word;
            
            sort(tempWord.begin(), tempWord.end());
            
            myMap[tempWord].push_back(word);
        }
        
       
        for(auto item : myMap)
        {
            resultVector.push_back(item.second);
        }
        
        return resultVector;


    }
};