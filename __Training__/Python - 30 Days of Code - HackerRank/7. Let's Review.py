# https://www.hackerrank.com/challenges/30-review-loop/problem


# Inputs
standard_input = """3
Hacker
Rank
is Goooooood"""


""" Enter your code here. Read input from STDIN. Print output to STDOUT """

for i in range(int(input())):
    # 3

    text = input()
    # Hacker
    # Rank
    # is Goooooood

    text_even = ""
    text_odd = ""

    for j in range(len(text)):
        if j % 2 == 0:
            text_even += text[j]
        else:
            text_odd += text[j]

    print(text_even, text_odd)
    # Hce akr
    # Rn ak
    # i oooo sGoood
