class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==0) return 0;
        int ma = 0,cur = 0;
        char prev = '`';
        queue<char> q;
        unordered_map<char,int> mp;
        for(int i = 0;i<s.size();i++){
            char ic = s[i];
            if(prev != ic && mp.count(ic) == 0){
                cur +=1;
                prev = ic;
                mp[ic] = i;
                q.push(ic);
            }
            else {
                if(ma<cur) ma = cur;
                int pos = mp[ic];
                if(pos != 0)cur =i- pos;
                prev = ic;
                mp[ic] = i;
                while(q.front() !=ic){
                    mp.erase(q.front());
                    q.pop(); 
                    }
                    q.pop();q.push(ic);

            }
        }
        if(ma<cur) ma = cur;
        return ma;
    }
};