class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int count[5001] = {0};
        int count_copy[5001];
        int count_size = 0;
        int word_len = words[0].size();
        
        unordered_map<string, int> map;
        vector<int> results;
        
        for(const string& word : words)
        {
            int val = map[word];
            if(val == 0)
            {
                map[word] = ++count_size;
                val = count_size;
            }
            count[val]++;
        }
        
        int max_index = s.size() - word_len * words.size();
        for(int i=0;i <= max_index; ++i)
        {
            std::string w = s.substr(i,word_len);
            int index = map[w];
            if(index)
            {
                bool ok = true;
                
                for(int i=1;i<=count_size;++i)
                    count_copy[i] = count[i];
                
                count_copy[index]--;
                for(int j = 1; j < words.size(); ++j)
                {
                    w = s.substr(i + word_len * j, word_len);
                    index = map[w];
                    if(!index || count_copy[index] == 0)
                    {
                        ok = false;
                        break;
                    }
                    count_copy[index]--;
                }
                if(!ok)continue;
                
                ok = true;
                for(int i=1;i<=ok && count_size;++i)
                    if(count_copy[i] != 0)
                        ok = false;
                
                if(ok)
                    results.push_back(i);
            }
        }
        return results;
    }

};
