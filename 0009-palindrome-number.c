bool isPalindrome(int x) {
    double rev=0,rem=0,o=x;
    if(x<0)
    return false;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    if(rev==o)
    return true;
    else return false;
}