import collections

#print("Enter the input ")
data = input()

freq = collections.Counter(data)

#print(freq)

count = 0
for key in freq:
	if freq[key] % 2 != 0:
		count += 1
if count == 0 or count == 1:
	print("YES")
else:
	print("NO")
