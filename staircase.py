
print("Enter the number of lines : ")
n = int(input())

for lineNo in range( 1 , n + 1):
        #Code to print spaces
	for spaces in range(n - lineNo):
		print(' ',end='')
        #Code to print one line of # symbols
	for i in range(lineNo):
		print('#', end='')
	print()
