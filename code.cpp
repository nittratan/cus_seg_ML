string myFunction(string s, int b) {
    if (numRows == 1)
        return s;
    string res = "";
    int step = 2*(numRows-1);
    for (int i = 0; i < numRows; i++) {
        int idx = 0;
        while (idx+i < s.size()) {
            res += s[idx+i];
            if (i != 0 && i != numRows-1 && idx+step-i < s.size()) 
                res += s[idx+step-i];
            idx += step;
        }
    }
    return res;
}