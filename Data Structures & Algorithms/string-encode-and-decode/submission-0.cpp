class Solution {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string res = "";
        for (string s : strs) {
            res += to_string(s.length()) + "#" + s;
        }
        return res;
    }


    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.length()) {
            int j = i;
            // Find the delimiter '#'
            while (s[j] != '#') {
                j++;
            }
            // Extract length before '#'
            int length = stoi(s.substr(i, j - i));

            // Extract the actual string after '#'
            res.push_back(s.substr(j + 1, length));

            // Move i to the beginning of next encoded string
            i = j + 1 + length;
        }

        return res;
    }
};
