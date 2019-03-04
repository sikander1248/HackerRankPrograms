#https://www.hackerrank.com/challenges/strange-advertising/problem

days = int(input("Enter the number of days : "))

currentDay = 1
shared = 5
totalLikes = 0
while currentDay <= days:
	liked = shared // 2
	totalLikes += liked
	print(currentDay, shared, liked, totalLikes)

	currentDay += 1
	shared = liked * 3

print(totalLikes)
