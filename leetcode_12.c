char* intToRoman(int num) {
    char* res = (char*)malloc(20 * sizeof(char));
    res[0] = '\0';

    int thousands = num / 1000;
    int hundreds = (num % 1000) / 100;
    int tens = (num % 100) / 10;
    int ones = num % 10;

    if (thousands == 3) strcat(res, "MMM");
    else if (thousands == 2) strcat(res, "MM");
    else if (thousands == 1) strcat(res, "M");

    if (hundreds == 9) strcat(res, "CM");
    else if (hundreds == 8) strcat(res, "DCCC");
    else if (hundreds == 7) strcat(res, "DCC");
    else if (hundreds == 6) strcat(res, "DC");
    else if (hundreds == 5) strcat(res, "D");
    else if (hundreds == 4) strcat(res, "CD");
    else if (hundreds == 3) strcat(res, "CCC");
    else if (hundreds == 2) strcat(res, "CC");
    else if (hundreds == 1) strcat(res, "C");

    if (tens == 9) strcat(res, "XC");
    else if (tens == 8) strcat(res, "LXXX");
    else if (tens == 7) strcat(res, "LXX");
    else if (tens == 6) strcat(res, "LX");
    else if (tens == 5) strcat(res, "L");
    else if (tens == 4) strcat(res, "XL");
    else if (tens == 3) strcat(res, "XXX");
    else if (tens == 2) strcat(res, "XX");
    else if (tens == 1) strcat(res, "X");

    if (ones == 9) strcat(res, "IX");
    else if (ones == 8) strcat(res, "VIII");
    else if (ones == 7) strcat(res, "VII");
    else if (ones == 6) strcat(res, "VI");
    else if (ones == 5) strcat(res, "V");
    else if (ones == 4) strcat(res, "IV");
    else if (ones == 3) strcat(res, "III");
    else if (ones == 2) strcat(res, "II");
    else if (ones == 1) strcat(res, "I");

    return res;
}
