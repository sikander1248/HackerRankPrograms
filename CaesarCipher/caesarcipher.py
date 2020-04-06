n = int(input())
s = input()
k = int(input())
k = k % 26;
for c in s:
    ascii = ord(c)
    newchar = c
    if(c.isalpha()):
        newchar = ascii + k
        if    c.isupper() and newchar > 90:    
            newchar -= 26
        elif c.islower() and newchar > 122:
            newchar -= 26            
        newchar = chr(newchar)
    #print(c , ascii , newchar)    
    print(newchar, end='')
