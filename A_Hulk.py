n = int(input())
listy = ['hate','love']

result =""

if n==1:
    print("I hate it")
else:
    result = "I hate that"
    for i in range(2,n):
        if i%2==0:
            result += f" I {listy[1]} that"
        else:
            result+= f" I {listy[0]} that"  
        
    if n%2==0:
        result+=f" I {listy[1]} it"
    else:
        result+=f" I {listy[0]} it"

print(result)