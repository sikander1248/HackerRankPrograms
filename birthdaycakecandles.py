n = int( input() )
#height = [6, 4, 2, 6]
height = list ( map( int , input().split() ) )
tallestCandle = max(height) 
#print(tallestCandle)

print ( height.count( tallestCandle ) )
