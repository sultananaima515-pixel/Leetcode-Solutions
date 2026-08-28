bool isPalindrome(int x) {

    int last;
    int y = x;
    long rev = 0;

    if (x < 0)
        return false;
    while (x != 0) {
        last = x % 10;
        rev = rev * 10 + last;
        x = x / 10;
    }
    if (y == rev) {
        return true;
    } else
        return false;
}