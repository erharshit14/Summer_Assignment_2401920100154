class Solution {
public:
    bool check(int a[], int b[]) {
        for(int i = 0; i < 26; i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if(m > n) return ans;

        int freqP[26] = {0};
        int freqS[26] = {0};

        for(int i = 0; i < m; i++) {
         freqP[p[i] - 'a']++;
         freqS[s[i] - 'a']++;
        }

        if(check(freqP, freqS))
            ans.push_back(0);

        for(int i = m; i < n; i++) {
         freqS[s[i] - 'a']++;
         freqS[s[i - m] - 'a']--;

            if(check(freqP, freqS))
             ans.push_back(i - m + 1);
        }

         return ans;
    }
};