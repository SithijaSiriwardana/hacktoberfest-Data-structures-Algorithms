loop=4
x=0
array = []
ip=''
sub=''
count=0
while(x<loop):
    value=input("Enter octet : ")
    i = int(value)
    array.append(format(i,'08b'))
    x+=1
last=int(input("Enter the netip : "))    
for i in range (len(array)):
    ip = ip + array[i]+'.'



while(last!=0):
    if(last<8):
        sub=sub+str(255-2**(8-last))+'.'
        last=0
    if(last>8):
        sub=sub+'255'+'.'
        last=last-8
    count+=1
    
if(count==1): sub=sub+"0.0.0";
    
if(count==2): sub =sub +"0.0"
    
if(count==3): sub=sub +"0";

else: sub= sub[:-1]


print(ip[:-1])
print(sub)

      
    
       
