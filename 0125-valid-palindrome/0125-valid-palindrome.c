bool isPalindrome(char *s)
{
    int i = 0, j = 0;
    char temp[10000000];
    for (i = 0; s[i] != '\0'; i++)
    {
        if (isalnum(s[i]))
        {
            temp[j] = tolower(s[i]);
            j++;
        }
    }
    temp[j] = '\0';
    int left = 0;
    int right = j - 1;
    while (left < right)
    {
        if (temp[left] != temp[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}