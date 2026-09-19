int lengthOfLongestSubstring(char* s) {
    int len = strlen(s);
    if (len == 0)
        return 0;

    int max_len = 0;

    for (int i = 0; i < len; i++) {

        bool seen[256] = {false};

        for (int j = i; j < len; j++) {
            unsigned char current_char = s[j];

            if (seen[current_char] == true) {
                break;
            }

            seen[current_char] = true;

            int current_len = j - i + 1;
            if (current_len > max_len) {
                max_len = current_len;
            }
        }
    }

    return max_len;
}
