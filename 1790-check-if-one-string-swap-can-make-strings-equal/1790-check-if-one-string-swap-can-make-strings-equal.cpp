class Solution {
public:
	bool areAlmostEqual(string s1, string s2) {
		int n = s1.size();
		int m = s2.size();
		if (n != m) 
            return false;
		int missCnt = 0;
		char miss1, miss2;
		for (int i = 0; i < n; i++) {
			if (s1[i] != s2[i]) {
				if (missCnt > 1) 
                    return false;
				if (!missCnt) 
                {
					miss1 = s1[i];
					miss2 = s2[i];
				} 
                else 
                {
					if (s1[i] != miss2 || s2[i] != miss1)
						return false;
				}
				++missCnt;
			}
		} 
        if (missCnt == 1) 
            return false;
		return true;
	}
};