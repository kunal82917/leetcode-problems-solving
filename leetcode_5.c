bool isPalindrome(char* s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

char* longestPalindrome(char* s) {
    int n = strlen(s);
    if (n == 0)
        return "";

    int best_start = 0;
    int max_len = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int current_len = j - i + 1;

            if (current_len > max_len && isPalindrome(s, i, j)) {
                max_len = current_len;
                best_start = i;
            }
        }
    }

    char* result = (char*)malloc((max_len + 1) * sizeof(char));
    strncpy(result, s + best_start, max_len);
    result[max_len] = '\0';

    return result;
}
