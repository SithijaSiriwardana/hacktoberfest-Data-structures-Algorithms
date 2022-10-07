#create a file name test.txt and save it in the code location

f= open("test.txt")

a = []
if(f):
    s=f.readline();
    while(s!=""):
        for i in range (len(s)):
            if(s[i]=="(" or s[i]=="[" or s[i]=="{" or s[i]=="<" or s[i]==">" or s[i]=="}" or s[i]=="]" or s[i]==")" ):
                a.append(s[i])
        s=f.readline()
    f.close()
print(a)

Open= ["[","{","(","<"] 
close= ["]","}",")",">"]
#this function will return whether the string is apalindrome or not
def check(myStr): 
    stack = [] 
    for i in myStr: 
        if i in Open: 
            stack.append(i) 
        elif i in close: 
            pos = close.index(i) 
            if ((len(stack) > 0) and(Open[pos] == stack[len(stack)-1])): 
                stack.pop() 
            else: 
                return "Unbalanced"
    if len(stack) == 0: 
        return "Balanced"
    else:
        return "Unbalanced"

if(len(a)==0):
    print("Balanced")
else:
    x=check(a)
    print(x)


        
        
    

