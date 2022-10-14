#two strings occurence

a="cat"
b="dog"
count=0
flag=0

s = input("Enter your string : ").split(" ")
for i in range(len(s)):
    if (a==s[i]):
        count=count+1
    if (b==s[i]):
        flag=flag+1

if(count==flag):
    print("Same number of occurences")
else:
    print("Not same number of occurences")
