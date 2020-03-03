
n = int( input() )

stickLengths = [int(ele) for ele in input().split()]

while len(stickLengths) != 0:
    print( len(stickLengths))
    smallestStick = min(stickLengths)
    stickLengths = [ele - smallestStick for ele in stickLengths]
    #print(stickLengths)
    stickLengths = [ele for ele in stickLengths if ele != 0]
