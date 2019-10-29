
str1 = input("Enter the first string : ");
str2 = input("Enter the second string : ");

freq = [0] * 26

for c in str1:
	freq[ ord(c) - 65 ] += 1
print(freq)

for c in str2:
	freq[ ord(c) - 65 ] -= 1
print(freq)
print("Anagram" if any(freq) == False else "Not An Anagram")
