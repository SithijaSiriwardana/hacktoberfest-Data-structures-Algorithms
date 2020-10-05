#palindrome check

#this function will return whether the string is apalindrome or not
def ispal(s):
    if(len(s)<2):
        return True
    if(s[0]==s[-1]):
        return ispal(s[1:-1])
    else:
        return False



s = input("Enter yor string lowercase : ")

n = ispal(s)

if(n== True):
    print("It is a palindrome")
else:
    print("It is not a palindrome")
