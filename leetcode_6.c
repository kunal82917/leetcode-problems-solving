char* convert(char* s, int numRows) {
    int len = strlen(s);

    if (numRows <= 1 || len <= numRows) {
        char* res = (char*)malloc((len + 1) * sizeof(char));
        strcpy(res, s);
        return res;
    }

    char* result = (char*)malloc((len + 1) * sizeof(char));
    int cycle = 2 * numRows - 2;
    int idx = 0;

    for (int row = 0; row < numRows; row++) {
        for (int i = 0; i + row < len; i += cycle) {
            result[idx++] = s[i + row];

            int diag_idx = i + cycle - row;
            if (row != 0 && row != numRows - 1 && diag_idx < len) {
                result[idx++] = s[diag_idx];
            }
        }
    }

    result[idx] = '\0';
    return result;
}
