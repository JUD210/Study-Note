l = [0,1,2,3,4,5]
l = l[-1::-1]
print(l)
# [5, 4, 3, 2, 1, 0]

l[0],l[1] = l[1],l[0]
print(l)
# [4, 5, 3, 2, 1, 0]

a, b, c = 3, 4, 5
c, b, a = a, b, c
print(a, b, c)
# 5 4 3
